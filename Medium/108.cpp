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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.size() == 0) return nullptr;
        return GenerateBST(0, nums.size() - 1, nums);
    }

    TreeNode * GenerateBST(int start, int end, vector<int> nums) {
        if (start > end) return nullptr;
        if (start == end) return new TreeNode(nums[start]);
        int middle = start + (end - start) / 2;
        auto root = new TreeNode(nums[middle]);
        root->left = GenerateBST(start, middle - 1, nums);
        root->right = GenerateBST(middle + 1, end, nums);
        return root;
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
    cout << "" << endl;
    return 0;
}

