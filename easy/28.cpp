// leetcode.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
	static int strStr(string haystack, string needle)
	{			
		auto hCur = 0;
		auto nCur = 0;
		while (haystack[hCur] != '\0' && needle[nCur] != '\0')
		{
			if (haystack[hCur] == needle[nCur])
			{
				hCur++;
				nCur++;
			}
			else
			{
				hCur = hCur - nCur + 1;
				nCur = 0;
			}
		}
		if (needle[nCur] =='\0')
		{
			return hCur - nCur;
		}
		return -1;
	}
};

int main()
{	
	Solution s;
	cout << s.strStr("","") << endl;
	getchar();
	return 0;
}
