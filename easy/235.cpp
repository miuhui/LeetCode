#include<stdio.h>

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL || p == NULL || q == NULL) 
        	return NULL;
        if (root->val < p->val && root->val < q->val) {
			lowestCommonAncestor(root->right, p, q);
		}
		else if (root->val > p->val && root->val > q->val) {
			lowestCommonAncestor(root->left, p, q);
		}
		else {
			return root;
		}
        
    }
}; 
int main() {
	return 0;
}
