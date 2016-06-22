//
// Created by 缪慧 on 3/9/16.
//
#include <iostream>
#include <math.h>

using namespace std;


class Solution {
public:
    int bulbSwitch(int n) {
        return (int)sqrt(n);
    }
};

int main() {
    Solution s;
    cout << s.bulbSwitch(3) << endl;
    return 0;
}

