#include<stdio.h>
#include<stack>
#include<vector>

using namespace std;


struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if (root == NULL) {
        	return false;
		}
		int curSum = 0;
		stack<int> s; 
		
    }
};

int main() {
	
	return 0;
}
