//
// Created by 缪慧 on 3/9/16.
//
#include <iostream>
#include <vector>


using namespace std;


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        auto result = 0;
        for (auto i = 0; i < nums.size(); ++i) {
            result ^= nums[i];
        }
        return result;
    }
};

int main() {
    vector<int> nums = {1,2,1,3,2};
    Solution s;
    auto result = s.singleNumber(nums);
    cout << result << endl;
    return 0;
}
