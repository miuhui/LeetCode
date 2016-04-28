// leetcode.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Solution {
public:

	static string getHint(string secret, string guess) {
		int len = guess.length();
		auto bulles = 0;
		auto cows = 0;
		vector<bool> target(len,false);
		for (auto i = 0; i < len; i++)
		{
			if (secret[i] == guess[i])
			{
				bulles++;
				target[i] = true;
			}
		}
		for (auto i = 0; i < len; i++)
		{
			if (secret[i] != guess[i])
			{
				for (auto j = 0; j < len; j++)
				{
					if (!target[j] && secret[j] == guess[i])
					{
						cows++;
						target[j] = true;
						break;
					}
				}
			}
			
		}
		stringstream bullesSS, cowsSS;
		bullesSS << bulles;
		cowsSS << cows;
		return bullesSS.str() + "A" + cowsSS.str() + "B";
	}
};

int main()
{	
	Solution s;
	cout << s.getHint("011","110") << endl;
	getchar();
	return 0;
}
