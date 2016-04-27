// leetcode.cpp : Defines the entry point for the console application.
//

#include <vector>
#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
	static bool containsNearbyDuplicate(vector<int>& nums, int k) {
		if (k <= 0 || nums.size() <= 1)
		{
			return false;
		}
		map<int, int> numMap;
		for (auto i = 0; i < nums.size(); i++)
		{
			auto it = numMap.find(nums[i]);
			if (it != numMap.end() && i - numMap[nums[i]] <= k)
			{
				return true;
			}
			numMap[nums[i]] = i;
		}
		return false;
	}
};

int main()
{
	Solution s;
	vector<int> nums = {-1,-1 };
	cout << s.containsNearbyDuplicate(nums, 1);
	getchar();
	return 0;
}
