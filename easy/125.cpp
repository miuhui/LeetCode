//
// Created by 缪慧 on 3/9/16.
//
#include <iostream>
#include <vector>


using namespace std;


class Solution {
public:
    bool isPalindrome(string s)
    {
        int i = 0;
        int j = s.size() - 1;
        while(i < j)
        {
            while (!isValid(s[i]) && i < j) i++;
            while (!isValid(s[j]) && i < j) j--;
            if (i >= j) break;
            if (!isEqual(s[i],s[j])) return false;
            i++;
            j--;
        }
        return true;
    }

    bool isValid(char c)
    {
        return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
    }
    bool isEqual(char a, char b)
    {
        if (a >= 'A' && a <= 'Z')
            a = a - 'A' + 'a';
        if (b >= 'A' && b <= 'Z')
            b = b - 'A' + 'a';
        if (a == b)
            return true;
        else
            return false;
    }

};

int main() {
    Solution s;
    cout << s.isPalindrome("0P") << endl;
    return 0;
}
