// leetcode.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <stdlib.h>


using namespace std;

class Solution {
public:
	static int compareVersion(string version1, string version2) {
		vector<int> first, second;
		auto p1 = strtok(&version1[0], ".");
		while (p1!= nullptr)
		{
			auto temp =  atoi(p1);
			first.push_back(temp);
			p1 = strtok(nullptr, ".");
		}
		auto p2 = strtok(&version2[0], ".");
		while (p2!=nullptr)
		{
			auto temp = atoi(p2);
			second.push_back(temp);
			p2 = strtok(nullptr, ".");
		}
		auto curIndex = 0;
		while (curIndex < first.size() && curIndex < second.size())
		{
			if (first[curIndex] < second[curIndex]) return -1;
			if (first[curIndex] > second[curIndex]) return 1;
			curIndex++;
		}
		while (curIndex < first.size())
		{
			if (first[curIndex] != 0)
				return 1;
			curIndex++;
		}
		while (curIndex < second.size())
		{
			if (second[curIndex] != 0)
				return -1;
			curIndex++;
		}
		return 0;
	}
};

int main()
{		
	Solution s;
	cout << s.compareVersion("1.0","1") << endl;
	getchar();
	return 0;
}
