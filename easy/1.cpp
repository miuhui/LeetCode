// leetcode.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <map>


using namespace std;

class Solution {
public:
	static vector<int> twoSum(vector<int>& nums, int target)
	{
		vector<int> result;
		map<int, int> mapNums;
		if (nums.size() == 0)
			return result;		
		for (auto i = 0; i < nums.size(); i++)
		{
			auto curNum = nums[i];
			if (mapNums.count(curNum) == 0)
			{
				mapNums[curNum] = i;
			}
			auto n = mapNums.count(target - curNum);
			if (n == 1)
			{
				if (mapNums[target-curNum] < i)
				{
					result.push_back(i);
					result.push_back(mapNums[target - curNum]);
					return result;
				}				
			}			
		}
		return result;
	}
};

int main()
{	
	vector<int> nums = { -1,-2,-3,-4,-5,- 8 };
	Solution s;
	auto result = s.twoSum(nums, -8);
	for (auto i = 0; i < result.size(); i++)
	{
		cout << result[i] << endl;
	}
	getchar();
	return 0;
}
