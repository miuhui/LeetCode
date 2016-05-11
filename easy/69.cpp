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
	static string addBinary(string a, string b) {
		vector<char> result;
		int lenA = a.length();
		int lenB = b.length();
		if (lenA == 0 && lenB == 0)
		{
			return "";
		}
		if (lenA == 0)
		{
			return b;
		}
		if (lenB == 0)
		{
			return a;
		}		
		auto curA = lenA - 1;
		auto curB = lenB - 1;
		auto jw = 0;
		while (curA >= 0 && curB >= 0)
		{
			auto bitOfAToInt = a[curA] - '0';
			auto bitOfBToInt = b[curB] - '0';
			auto addResult = bitOfAToInt + bitOfBToInt + jw;
			auto bitAfterAdd = addResult % 2;
			jw = addResult / 2;
			result.push_back(bitAfterAdd + '0');
			curA--;
			curB--;
		}
		if (curA >= 0)
		{			
			while (curA >= 0)
			{
				auto bitOfAToInt = a[curA] - '0';
				auto addResult = bitOfAToInt + jw;
				auto bitAfterAdd = addResult % 2;
				jw = addResult / 2;
				result.push_back(bitAfterAdd + '0');
				curA--;
			}
			if (jw != 0)
			{
				result.push_back('1');
			}
		}
		else if (curB >= 0)
		{			
			while (curB >= 0)
			{
				auto bitOfBToInt = b[curB] - '0';
				auto addResult = bitOfBToInt + jw;
				auto bitAfterAdd = addResult % 2;
				jw = addResult / 2;
				result.push_back(bitAfterAdd + '0');
				curB--;
			}
			if (jw != 0)
			{
				result.push_back('1');
			}
		}
		else
		{
			if (jw != 0)
			{
				result.push_back('1');
			}
		}
		reverse(result.begin(), result.end());
		string str(result.begin(), result.end());
		return str;
	}
};

int main()
{	
	Solution s;
	cout << s.addBinary("100","110010") << endl;
	getchar();
	return 0;
}
