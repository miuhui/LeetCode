// leetcode.cpp : Defines the entry point for the console application.
//

#include <vector>
#include <iostream>
#include <stack>

using namespace std;

//definition of tree
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
	//inorder a binary tree
	static vector<int> inorderTraversal(TreeNode* root) {
		vector<int> result;
		if (root == nullptr)
		{
			return result;
		}
		//store treenode
		stack<TreeNode*> s;		
		auto cur = root;
		while (cur != nullptr || !s.empty())
		{
			if (cur != nullptr)
			{
				s.push(cur);
				cur = cur->left;
			}
			else 
			{
				cur = s.top();
				s.pop();
				result.push_back(cur->val);				
				cur = cur->right;
			}			
		}
		return result;
	}
};

int main()
{	
	getchar();
	return 0;
}
