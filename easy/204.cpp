//
// Created by 缪慧 on 3/9/16.
//
#include <iostream>

using namespace std;


class Solution {
public:
    int countPrimes(int n) {
        int result = 0;
        if (n <= 2) return 0;
        bool *p = new bool[n];
        memset(p, true, sizeof(bool) * n);
        for (int i = 2; i * i < n; ++i) {
            for (int j = i; i * j < n; ++j) {
                if (p[i * j]) p[i * j] = false;
            }
        }
        for (int i = 2; i != n ; ++i) {
            if (p[i]) result++;
        }
        return result;

    }
};

int main() {
    Solution s;
    cout << s.countPrimes(6) << endl;
    return 0;
}
