// leetcode.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <stack>


using namespace std;

class Solution {
public:
	static string convertToTitle(int n) {
		if (n <= 0)
			return "";
		string result;
		stack<int> reminder;		
		while (n != 0)
		{
			reminder.push((n - 1) % 26);
			n = (n - 1) / 26;
		}
		while (!reminder.empty())
		{
			result += 'A' + reminder.top();
			reminder.pop();
		}
		return result;
	}
};

int main()
{		
	Solution s;
	cout << s.convertToTitle(26) << endl;
	getchar();
	return 0;
}
