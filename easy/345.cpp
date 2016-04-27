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

using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        int len = (int)s.length();
        if (len == 0) {
            return s;
        }
        vector<char> vowels = {'a','A','e','E','u','U','i','I','o','O'};
        int front = 0;
        int tail = len - 1;
        while (front < tail) {
            while (find(vowels.begin(), vowels.end(), s[front]) == vowels.end()) {
                front++;
            }
            while (find(vowels.begin(), vowels.end(), s[tail]) == vowels.end()) {
                tail--;
            }
            if (front < tail) {
                char temp = s[front];
                s[front] = s[tail];
                s[tail] = temp;
                front++;
                tail--;
            }
        }
        return s;
    }
};

int main(int argc, const char * argv[]) {
    Solution s;
    cout << s.reverseVowels("aA") <<endl;
    return 0;
}
