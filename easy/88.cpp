//
//  main.cpp
//  leetcode
//
//  Created by miaohui on 4/20/16.
//  Copyright © 2016 miaohui. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (m == 0 && n == 0) {
            return;
        }
        int mCur = m - 1;
        int nCur = n - 1;
        while (mCur >= 0 && nCur >= 0) {
            if (nums1[mCur] > nums2[nCur]) {
                nums1[mCur + nCur + 1] = nums1[mCur];
                mCur--;
            }
            else {
                nums1[mCur + nCur + 1] =nums2[nCur];
                nCur--;
            }
        }
        while (nCur >= 0) {
            nums1[nCur] = nums2[nCur];
            nCur--;
        }
    }
};

int main(int argc, const char * argv[]) {
    vector<int> n1 = {1,0};
    vector<int> n2 = {2};
    Solution s;
    s.merge(n1,1, n2,1);
    for (int i = 0; i < n1.size(); i++) {
        cout << n1[i] <<" ";
    }
    return 0;
}
