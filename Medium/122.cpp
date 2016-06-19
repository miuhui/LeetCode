//
// Created by 缪慧 on 3/9/16.
//
#include <iostream>
#include <vector>


using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1)
            return 0;
        auto maxProfit = 0;
        auto startPrice = -1;
        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] > prices[i - 1]) {
                maxProfit += prices[i] - prices[i - 1];
            }
        }
        return maxProfit;
    }
};

int main() {
    vector<int> prices = {2,1,2,0,1};
    Solution s;
    cout << s.maxProfit(prices) << endl;
    return 0;
}
