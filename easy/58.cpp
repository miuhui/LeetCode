// leetcode.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <map>

using namespace std;

class Solution {
public:

	static int lengthOfLastWord(string s) {
		int len = s.length();
		if (len == 0)
		{
			return 0;
		}
		auto curPosition = len - 1;
		auto result = 0;
		while (curPosition >= 0)
		{
			if (s[curPosition] == ' ' && result == 0)
			{
				curPosition--;				
			}
			else if (s[curPosition] == ' ' && result != 0)
			{
				break;
			}
			else if (s[curPosition] != ' ')
			{
				result++;
				curPosition--;
			}
		}
		return result;
	}
};

int main()
{	
	Solution s;
	cout << s.lengthOfLastWord("a") << endl;
	getchar();
	return 0;
}
