// leetcode.cpp : Defines the entry point for the console application.
//

#include <vector>
#include <iostream>
#include <stack>

using namespace std;

//树的定义
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
	//前序遍历
	static vector<int> preorderTraversal(TreeNode* root) {
		vector<int> result;
		stack<TreeNode*> s;		
		auto cur = root;
		while (cur!=nullptr || !s.empty())
		{
			while (cur != nullptr)
			{
				result.push_back(cur->val);
				s.push(cur);
				cur = cur->left;
			}
			if (!s.empty())
			{
				cur = s.top();
				s.pop();
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
