//
// Created by 缪慧 on 3/9/16.
//
#include <iostream>
#include <string>
#include <math.h>

using namespace std;


class Solution {
public:
    string convert(string s, int numRows)
    {
        int sumOfSteps = 2 * (numRows - 1);
        if (numRows <= 1 || s == "" || sumOfSteps == 0)
            return s;
        string result ="";
        int len = s.length();
        for (int i = 0; i < numRows; ++i)
        {
            if (i < len)
            {
                result += s[i];
            }
            int step = sumOfSteps - (2 * i);
            int curIndex = i;
            while (curIndex + step < len)
            {
                if (curIndex + step == curIndex)
                {
                    step = sumOfSteps - step;
                    continue;
                }
                curIndex = curIndex + step;
                result += s[curIndex];
                step = sumOfSteps - step;
            }
        }
        return result;
    }
};

int main() {
    Solution s;
    cout << s.convert("Ab", 1) << endl;
    return 0;
}
