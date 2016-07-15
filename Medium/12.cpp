// leetcode.cpp : Defines the entry point for the console application.
//

#include <iostream>

using namespace std;

class Solution {
public:
	//sort words by length
	static string intToRoman(int num) {
		string result="";
		string map[4][10] = { { "0","I","II","III","IV","V","VI","VII","VIII","IX" },
							   {"0","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
							   {"0","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
							   {"0","M","MM","MMM"} };
		result += map[3][num / 1000] == "0" ? "": map[3][num / 1000];
		result += map[2][num / 100 % 10] == "0" ? "" : map[2][num / 100 % 10];
		result += map[1][num / 10 % 10] == "0" ? "" : map[1][num / 10 % 10];
		result += map[0][num % 10] == "0" ? "" : map[0][num % 10];
		return result;
	}

};

int main()
{	
	Solution s;
	printf("%s", s.intToRoman(50).c_str());
	getchar();
	return 0;
}
