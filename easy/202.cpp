//
//  202.cpp
//  leetcode
//
//  Created by 缪慧 on 3/6/16.
//  Copyright © 2016 miaohui. All rights reserved.
//

#include <stdio.h>
#include <set>

using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        if (n <= 0) {
            return false;
        }
        int sumDigits = 0;
        set<int> myset;
        set<int>::iterator it;
        while (n != 1) {
            int temp = n;
            while (n) {
                sumDigits += (n % 10) * (n % 10);
                n /= 10;
            }
            if (sumDigits == 1) {
                break;
            }
            else {
                it = myset.find(sumDigits);
                if (it != myset.end()) {
                    return false;
                }
                myset.insert(sumDigits);
                n = sumDigits;
                sumDigits = 0;
            }
            
        }
        return true;
    }
};



