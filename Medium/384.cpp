// leetcode.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <time.h>

using namespace std;

class Solution {
public:	
	Solution(vector<int> nums) {
		n = nums;
	}

	/** Resets the array to its original configuration and return it. */
	vector<int> reset() const
	{
		return n;
	}

	/** Returns a random shuffling of the array. */
	vector<int> shuffle() const
	{		
		if (n.size() == 0)
		{
			return {};
		}
		auto copyOfN = n;
		auto len = copyOfN.size();
		for (auto i = 0; i < len; i++)
		{
			auto step = rand() % (len-i);
			swap(copyOfN[i + step], copyOfN[i]);
		}
		return copyOfN;
		
	}
private:
	vector<int> n;
};

int main()
{	
	vector<int> nums = { 1,2,3 };
	auto s = new Solution(nums);	
	auto r2 =  s->shuffle();
	for (auto i = 0; i < r2.size(); i++)
	{
		cout << r2[i] << " ";
	}
	cout << "" << endl;
	getchar();
	return 0;
}
