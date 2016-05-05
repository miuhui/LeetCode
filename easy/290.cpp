// leetcode.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <map>

using namespace std;

class Solution {
public:

	static bool wordPattern(string pattern, string str) {
		if (pattern == "" || str == "")
		{
			return false;
		}
		map<string, char> str2Pattern;
		map<char, string> pattern2Str;
		auto patternSize = pattern.size();
		auto strSize = str.size();
		auto pCur = 0;
		auto sCur = 0;
		while (pCur < patternSize && sCur < strSize)
		{			
			auto curPatterLetter = pattern[pCur];
			string curWord = "";
			while (str[sCur] != ' ' && sCur < strSize)
			{
				curWord += str[sCur];
				sCur++;
			}
			if (str2Pattern.find(curWord) == str2Pattern.end())
			{
				str2Pattern[curWord] = curPatterLetter;
			}
			else if (str2Pattern[curWord] != curPatterLetter)
			{
				return false;
			}	
			if (pattern2Str.find(curPatterLetter) == pattern2Str.end())
			{
				pattern2Str[curPatterLetter] = curWord;
			}
			else if (pattern2Str[curPatterLetter] != curWord)
			{
				return false;
			}	
			sCur++;
			pCur++;
		}
		if(pCur < patternSize || sCur < strSize)
		{
			return false;
		}
		return true;
	}
};

int main()
{	
	Solution s;
	cout << s.wordPattern("aaa", "aa aa aa aa") << endl;
	getchar();
	return 0;
}
