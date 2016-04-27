// leetcode.cpp : Defines the entry point for the console application.
//

#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
	static int maxProfit(vector<int>& prices)
	{
		auto size = prices.size();
		if (size == 0)
		{
			return 0;
		}
		auto minPriceDay = 0;
		auto maxProfit = 0;
		for (auto i = 1; i < size; i++)
		{
			minPriceDay = prices[i] < prices[minPriceDay] ? i : minPriceDay;
			if (prices[i] - prices[minPriceDay] > maxProfit)
			{
				maxProfit = prices[i] - prices[minPriceDay];
			}
		}
		return maxProfit;
	}
};

int main()
{
	vector<int> prices = { 1,2,3,2,4 };
	Solution s;
	cout << s.maxProfit(prices);
	getchar();
	return 0;
}
