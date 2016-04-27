// leetcode.cpp : Defines the entry point for the console application.
//

#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	static string reverseString(string s)
	{
		int len = s.length();
		if (len <= 1)
		{
			return s;
		}
		auto swapCount = len / 2;
		auto front = 0;
		auto tail = len - 1;
		while (swapCount--)
		{
			auto temp = s[front];
			s[front] = s[tail];
			s[tail] = temp;
			front++;
			tail--;
		}
		return s;
	}
};

int main()
{
	Solution s;
	cout << s.reverseString("");
	getchar();
	return 0;
}
