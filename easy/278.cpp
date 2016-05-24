// leetcode.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

bool isBadVersion(int version);

class Solution {
public:
	static int firstBadVersion(int n) {	
		int low = 1, high = n;
		while (low < high)
		{
			auto mid = low + (high - low) / 2;
			if (isBadVersion(mid))
				high = mid;
			else
				low = mid + 1;
		}
		return low;
	}
};

int main()
{	
	Solution s;
	cout << "" << endl;
	getchar();
	return 0;
}
