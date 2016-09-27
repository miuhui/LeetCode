//
// Created by 缪慧 on 3/9/16.
//
#include <iostream>
#include <vector>

using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* generateBST(int left, int right, vector<TreeNode*> sortedElements) {
        if (left > right) return nullptr;
        if (left == right) return sortedElements[left];
        if (left + 1 == right) {
            sortedElements[left]->right = sortedElements[right];
            return sortedElements[left];
        }
        auto middle = left + (right - left) / 2;
        //avoid flow
        TreeNode *root = sortedElements[middle];
        root->left = generateBST(left, middle - 1, sortedElements);
        root->right = generateBST(middle + 1, right, sortedElements);
        return root;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        vector<TreeNode*> sortedElements;
        auto curNode = head;
        while (curNode != nullptr) {
            sortedElements.push_back(new TreeNode(curNode->val));
            curNode = curNode -> next;
        }
        return generateBST(0, (int)sortedElements.size() - 1, sortedElements);
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(head);
 * int param_1 = obj.getRandom();
 */

int main() {
    Solution s;
    ListNode *l;
    s.sortedListToBST(l);
    cout << "" << endl;
    return 0;
}

