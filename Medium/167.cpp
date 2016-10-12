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
	static vector<int> twoSum(vector<int>& numbers, int target) {
		auto front = 0;
		auto tail = numbers.size() - 1;
		vector<int> result;
		while (front < tail)
		{
			if (numbers[front] + numbers[tail] == target)
			{				
				result.push_back(front + 1);
				result.push_back(tail + 1);
				break;
			}
			if (numbers[front] + numbers[tail] < target)
			{
				front++;
			}
			else
			{
				tail--;
			}
		}
		return result;
	}
};

int main()
{	
	Solution s;
	vector<int> numbers = { 2,7,11,15 };
	auto result = s.twoSum(numbers, 9);
	cout << "" << endl;
	getchar();
	return 0;
}
