//
//  main.cpp
//  leetcode
//
//  Created by 缪慧 on 3/10/16.
//  Copyright © 2016 miaohui. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int heigh(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        root->val = max(heigh(root->left),heigh(root->right)) + 1;
        return root->val;
    }

    bool run(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        int l = 0, r = 0;
        if (root -> left != NULL) l = root -> left -> val;
        if (root -> right != NULL) r = root -> right -> val;
        return abs(l - r) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }

    bool isBalanced(TreeNode* root) {
        heigh(root);
        return run(root);
    }
};



int main() {

    return 0;
}
