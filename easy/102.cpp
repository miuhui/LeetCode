#include <iostream>
#include <vector>
#include <stdio.h>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int> > levelOrder(TreeNode* root) {
        vector<vector<int> > res;
        if (root == NULL) {
            return res;
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
                if (t->left)
                	q.push(t->left);
                if (t->right)
                	q.push(t->right);
            }
            else {
            	if(!temp.empty()) {				
	            	res.push_back(temp);
	            	q.push(NULL);
	            	temp.clear();
	            }
			}
        }
        return res;
    }
};

int main() {	
    return 0;
}
