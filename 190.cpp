// leetcode.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:

	static uint32_t reverseBits(uint32_t n)
	{
		auto result = n;
		result = ((result & 0x55555555) << 1) | ((result & 0xAAAAAAAA) >> 1);
		result = ((result & 0x33333333) << 2) | ((result & 0xCCCCCCCC) >> 2);
		result = ((result & 0x0F0F0F0F) << 4) | ((result & 0xF0F0F0F0) >> 4);
		result = ((result & 0x00FF00FF) << 8) | ((result & 0xFF00FF00) >> 8);
		result = ((result & 0x0000FFFF) << 16) | ((result & 0xFFFF0000) >> 16);
		return result;
	}
};

int main()
{	
	Solution s;
	cout << s.reverseBits(43261596) << endl;
	getchar();
	return 0;
}
