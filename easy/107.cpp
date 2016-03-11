//
//  main.cpp
//  leetcode
//
//  Created by 缪慧 on 3/10/16.
//  Copyright © 2016 miaohui. All rights reserved.
//

#include <iostream>
#include <vector>
#include <stdio.h>
#include <queue>
#include <math.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
        if (root == NULL) {
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> temp;
        while (!q.empty()) {
            TreeNode* t = q.front();
            q.pop();
            if (t != NULL) {
                temp.push_back(t -> val);
                if (t->left != NULL)
                    q.push(t->left);
                if (t->right != NULL)
                    q.push(t->right);
            }
            else {
                if (!temp.empty()) {
                    result.push_back(temp);
                    q.push(NULL);
                    temp.clear();
                }
            }
        }
        reverse(result.begin(), result.end());
        return result;
    }
};

int main() {
    return 0;
}
