// leetcode.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:	
	//use dp to solve this problem
	static int combinationSum4(vector<int>& nums, int target) {
		vector<int> dp(target + 1, 0);
		dp[0] = 1;
		for (auto i = 1; i <= target; i++)
			for (auto num : nums)
				if (i >= num) dp[i] += dp[i - num];
		return dp[target];
	}

};

int main()
{	
	Solution s;
	vector<int> nums = { 1,2,3};
	cout << s.combinationSum4(nums,4) << endl;
	getchar();
	return 0;
}
