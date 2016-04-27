// leetcode.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	static bool isPowerOfFour(int num) {
		return num > 0 && (num&(num - 1)) == 0 && (num & 0x55555555) == num;
	}
};

int main()
{	
	Solution s;
	cout << s.isPowerOfFour(5) << endl;
	getchar();
	return 0;
}
