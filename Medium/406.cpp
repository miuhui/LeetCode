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
	vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) const
	{
		sort(people.begin(), people.end(), compairQueue);
		vector<pair<int, int>> result;
		for (auto i = 0; i < people.size(); i++)
		{
			if (people[i].second == i)
			{
				result.push_back(people[i]);
				continue;
			}
			result.insert(result.begin() + people[i].second, people[i]);
		}
		return result;
	}
private:
	static bool compairQueue(pair<int, int> front, pair<int, int> tail)
	{
		if (front.first > tail.first) return true;
		if (front.first < tail.first) return false;
		return front.second < tail.second;
	}
};

int main()
{	
	Solution s;
	vector<pair<int, int>> people;
	people.push_back(make_pair(7, 0));
	people.push_back(make_pair(4, 4));
	people.push_back(make_pair(7, 1));
	people.push_back(make_pair(5, 0));
	people.push_back(make_pair(6, 1));
	people.push_back(make_pair(5, 2));
	auto result = s.reconstructQueue(people);
	cout << "" << endl;
	getchar();
	return 0;
}
