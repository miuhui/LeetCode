//
// Created by 缪慧 on 3/9/16.
//
#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> out;
        fun(result, out, k, n, 1);
        return result;
    }

    void fun(vector<vector<int>> &result, vector<int> &out, int k, int n, int level)
    {
        if (n < 0) return;
        if (out.size() == k && n == 0) result.push_back(out);
        for (int i = level; i <= 9; ++i) {
            out.push_back(i);
            fun(result, out, k, n - i, i + 1);
            out.pop_back();
        }
    }


};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(head);
 * int param_1 = obj.getRandom();
 */

int main() {
    Solution s;
    auto result = s.combinationSum3(3,9);
    cout << "" << endl;
    return 0;
}

//
// Created by 缪慧 on 3/9/16.
//
#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> out;
        fun(result, out, k, n, 1);
        return result;
    }

    void fun(vector<vector<int>> &result, vector<int> &out, int k, int n, int level)
    {
        if (n < 0) return;
        if (out.size() == k && n == 0) result.push_back(out);
        for (int i = level; i <= 9; ++i) {
            out.push_back(i);
            fun(result, out, k, n - i, i + 1);
            out.pop_back();
        }
    }


};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(head);
 * int param_1 = obj.getRandom();
 */

int main() {
    Solution s;
    auto result = s.combinationSum3(3,9);
    cout << "" << endl;
    return 0;
}

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
	vector<vector<int>> combinationSum3(int k, int n) const
	{
		vector<vector<int>> result;
		vector<int> onePair;
		auto level = 1;
		CoreCombination(result, onePair, n, 1, k);
		return result;
	}
	void CoreCombination(vector<vector<int>> &result,vector<int> &onePair,int sum,int level,int num) const
	{
		if (sum == 0 && num == 0)
		{
			result.push_back(onePair);
			return;
		}
		if (num == 0)
		{
			return;
		}
		for (auto i = level; i <= 9 ;i++)
		{
			onePair.push_back(i);
			CoreCombination(result, onePair, sum - i, i + 1, num - 1);
			onePair.pop_back();
		}
	}
};

int main()
{	
	Solution s;
	auto result = s.combinationSum3(3, 9);
	cout << "" << endl;
	getchar();
	return 0;
}
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
	vector<vector<int>> combinationSum3(int k, int n) const
	{
		vector<vector<int>> result;
		vector<int> onePair;
		auto level = 1;
		CoreCombination(result, onePair, n, 1, k);
		return result;
	}
	void CoreCombination(vector<vector<int>> &result,vector<int> &onePair,int sum,int level,int num) const
	{
		if (sum == 0 && num == 0)
		{
			result.push_back(onePair);
			return;
		}
		if (num == 0)
		{
			return;
		}
		for (auto i = level; i <= 9 ;i++)
		{
			onePair.push_back(i);
			CoreCombination(result, onePair, sum - i, i + 1, num - 1);
			onePair.pop_back();
		}
	}
};

int main()
{	
	Solution s;
	auto result = s.combinationSum3(3, 9);
	cout << "" << endl;
	getchar();
	return 0;
}
