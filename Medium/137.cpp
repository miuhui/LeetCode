// leetcode.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	//sort words by length
	static int singleNumber(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		auto appearNums = 1;
		int cur;
		for (cur = 0; cur < nums.size() - 1; cur++)
		{
			//count the repeat number appears times
			if (nums[cur] == nums[cur + 1])
			{
				appearNums++;
			}
			else
			{
				if (appearNums == 3)
				{
					appearNums = 1;					
				}
				else
				{
					break;
				}
			}
		}
		return nums[cur];
	}

};

int main()
{	
	vector<int> nums = { 1,2,3,2,3,3,2,1 };
	Solution s;
	cout << s.singleNumber(nums) << endl;
	getchar();
	return 0;
}
