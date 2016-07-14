// leetcode.cpp : Defines the entry point for the console application.
//

#include <vector>
#include <iostream>
#include <algorithm>

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
	//sort words by length
	static int compared(string s1, string s2)
	{
		return s1.length() > s2.length();
	}
	
	static int maxProduct(vector<string>& words) {
		auto len = words.size();
		sort(words.begin(), words.end(), compared);
		vector<int> maps(len);
		for (auto i = 0; i < len; i++)
		{
			for (auto j = 0; j < words[i].length(); j++)
			{
				//indicator every letter accure in word[i]
				maps[i] |= 1 << words[i][j] - 'a';
			}
			
		}
		auto result = 0;
		for (auto i = 0; i < len; i++)
		{
			//no need to compare remaining words
			if (words[i].length() * words[i].length() < result)
			{
				break;
			}
			for (auto j = i + 1; j < len; j++)
			{
				//if word[i] and word[j] no common letters
				if ((maps[i] & maps[j]) == 0)
				{
					result = words[i].length() * words[j].length() > result ? words[i].length() * words[j].length() : result;
					break;
				}
			}
		}
		return result;
	}

};

int main()
{	
	Solution s;
	vector<string> words = { "a", "ab", "abc", "d", "cd", "bcd", "abcd" };
	cout << s.maxProduct(words) << endl;
	getchar();
	return 0;
}
