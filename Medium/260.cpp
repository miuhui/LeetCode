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
	static vector<int> singleNumber(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		vector<int> result;
		for (auto i = 0; i < nums.size(); i++)
		{
			if (i + 1 >= nums.size())
			{
				result.push_back(nums[i]);
				break;
			}
			if (nums[i] == nums[i+1])
			{
				i++;
			}
			else
			{
				result.push_back(nums[i]);
			}
		}
		return result;
	}
};

int main()
{
	Solution s;
	vector<int> v = { 1,2, 1,2,3,5 };
	auto result =  s.singleNumber(v);
	for (auto i = 0; i < result.size(); i++)
	{
		cout << result[i] << " ";
	}
	getchar();
	return 0;
}
