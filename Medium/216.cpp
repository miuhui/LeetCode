//
// Created by 缪慧 on 3/9/16.
//
#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> out;
        fun(result, out, k, n, 1);
        return result;
    }

    void fun(vector<vector<int>> &result, vector<int> &out, int k, int n, int level)
    {
        if (n < 0) return;
        if (out.size() == k && n == 0) result.push_back(out);
        for (int i = level; i <= 9; ++i) {
            out.push_back(i);
            fun(result, out, k, n - i, i + 1);
            out.pop_back();
        }
    }


};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(head);
 * int param_1 = obj.getRandom();
 */

int main() {
    Solution s;
    auto result = s.combinationSum3(3,9);
    cout << "" << endl;
    return 0;
}

//
// Created by 缪慧 on 3/9/16.
//
#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> out;
        fun(result, out, k, n, 1);
        return result;
    }

    void fun(vector<vector<int>> &result, vector<int> &out, int k, int n, int level)
    {
        if (n < 0) return;
        if (out.size() == k && n == 0) result.push_back(out);
        for (int i = level; i <= 9; ++i) {
            out.push_back(i);
            fun(result, out, k, n - i, i + 1);
            out.pop_back();
        }
    }


};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(head);
 * int param_1 = obj.getRandom();
 */

int main() {
    Solution s;
    auto result = s.combinationSum3(3,9);
    cout << "" << endl;
    return 0;
}

