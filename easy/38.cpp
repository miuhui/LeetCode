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

class Solution {
public:
    string countAndSay(int n) {
        string curStr = "1";
        while (--n) {
            string newStr = "";
            char* curPosition = &curStr[0];
            int count = 1;
            curPosition++;
            while (*curPosition != '\0') {
                if (*curPosition != *(curPosition - 1)) {
                    stringstream ss;
                    ss << count;
                    newStr += ss.str() + *(curPosition - 1);
                    count = 1;
                }
                else {
                    count++;
                }
                curPosition++;
            }
            stringstream ss;
            ss << count;
            newStr += ss.str() + *(curPosition - 1);
            curStr = newStr;
        }
        return curStr;
    }

};

int main(int argc, const char * argv[]) {
    Solution s;
    cout << s.countAndSay(5) <<endl;
    return 0;
}
