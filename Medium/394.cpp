//
// Created by 缪慧 on 3/9/16.
//
#include <iostream>
#include <vector>
#include "stack"

using namespace std;


class Solution {
public:
    string decodeString(string s) {
        stack<int> numStack;
        stack<string> strStack;
        auto size = s.length();
        string t = "";
        auto curInt = 0;
        for (int i = 0; i < size; ++i) {
            if (i < size && s[i] >= '0' && s[i] <= '9') {
                curInt = curInt * 10 + (s[i] - '0');
            }
            else if (s[i] == '[') {
                numStack.push(curInt);
                strStack.push(t);
                t.clear();
                curInt = 0;
            }
            else if (s[i] == ']') {
                auto topNum = numStack.top();
                numStack.pop();
                for (int j = 0; j < topNum; ++j) {
                    strStack.top() += t;
                }
                t = strStack.top();
                strStack.pop();
            }
            else {
                t += s[i];
            }

        }
        return strStack.empty() ? t : strStack.top();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(head);
 * int param_1 = obj.getRandom();
 */

int main() {
    Solution s;
    cout << s.decodeString("2[abc]3[cd]ef") << endl;
    return 0;
}

