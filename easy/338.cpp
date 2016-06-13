//
// Created by 缪慧 on 3/9/16.
//
#include <iostream>
#include <vector>


using namespace std;


class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> result;
        for (int i = 0; i <= num; ++i) {
            auto temp = i;
            auto countBitsResult = 0;
            while(temp != 0)
            {
                if (temp % 2 == 1)
                {
                    countBitsResult++;
                }
                temp /= 2;
            }
            result.push_back(countBitsResult);
        }
        return result;
    }
};

int main() {
    Solution s;
    auto result = s.countBits(5);
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    return 0;
}
