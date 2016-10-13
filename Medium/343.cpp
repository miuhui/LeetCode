#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    int integerBreak(int n) {
        vector<int> maxSum;
		maxSum.push_back(0);
		maxSum.push_back(0);
		maxSum.push_back(1);
		maxSum.push_back(2);
		maxSum.push_back(4);
		maxSum.push_back(6);
		maxSum.push_back(9);		
        for (int i = 7; i <= n; i++) {
        	maxSum.push_back(maxSum[i-3]*3);
		}
		return maxSum[n];
    }
};

int main()
{
	Solution s;
	cout << s.integerBreak(10);
	return 0;
} 
