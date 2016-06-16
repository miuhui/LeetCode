//
// Created by 缪慧 on 3/9/16.
//
#include <iostream>
#include <vector>


using namespace std;


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(),0);
        if (nums.size() == 0) return result;
        result[0] = 1;
        for (int i = 1; i < nums.size(); ++i) {
            result[i] = result[i - 1] * nums[i - 1];
        }
        auto right = 1;
        for (int j = nums.size() - 1; j >= 0; --j) {
            result[j] *= right;
            right *= nums[j];
        }
        return result;
    }
};

int main() {
    vector<int> nums = {1,2,3,4};
    Solution s;
    auto result =  s.productExceptSelf(nums);
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    return 0;
}
