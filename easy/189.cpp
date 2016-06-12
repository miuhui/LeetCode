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
	static void rotate(vector<int>& nums, int k) {
		if (nums.size() == 0) return;
		k = k % nums.size();
		reverse(nums.begin(), nums.end());		
		reverse(nums.begin(), nums.begin() + k);
		reverse(nums.begin() + k, nums.end());
	}
};

int main()
{		
	Solution s;
	vector<int> v = { 1,2};
	s.rotate(v, 3);
	for (auto i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	getchar();
	return 0;
}
