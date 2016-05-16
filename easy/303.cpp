//
//  main.cpp
//  leetcode
//
//  Created by miaohui on 4/20/16.
//  Copyright © 2016 miaohui. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <sstream>

using namespace std;
class NumArray {
public:
    vector<int> num;
    NumArray(vector<int> &nums) {
        num = nums;
    }

    int sumRange(int i, int j) {
        auto result = 0;
        for (auto t = i; t <= j; t++) {
            result += num[t];
        }
        return result;
    }
};
int main(int argc, const char * argv[]) {
    int array[6] = {-2, 0, 3, -5, 2, -1};
    vector<int> nums(array, array + 6);
    NumArray numArray(nums);
    cout << numArray.sumRange(0,5) <<endl;
    return 0;
}
