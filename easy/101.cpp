//
//  main.cpp
//  leetcode
//
//  Created by 缪慧 on 3/10/16.
//  Copyright © 2016 miaohui. All rights reserved.
//

#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool ifSymmetric(TreeNode* left, TreeNode* right) {
        if (left == NULL && right == NULL) {
            return true;
        }
        else if (left == NULL || right == NULL) {
            return false;
        }
        else if (left -> val != right -> val) {
            return false;
        }
        else {
            return ifSymmetric(left -> left, right -> right) && ifSymmetric(left -> right, right -> left);
        }
    }

    bool isSymmetric(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        return ifSymmetric(root->left, root->right);
    }
};



int main() {
    return 0;
}
