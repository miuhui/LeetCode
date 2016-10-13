#include <iostream>
#include <string> 

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
    	int len_s = s.length();
        int len_t = t.length();
        if (len_s == 0) return true;
        int startPos = 0;
        for	(int i = 0; i < len_s; i++) {
        	for (int j = startPos; j < len_t; j++) {
        		if (s[i] == t[j]) 
				{
					if (i == len_s - 1) return true; 
					else {
						startPos = j + 1;
						break;
					}
				}
				else {
					if (j == len_t - 1) return false;
				}  
			}			
		}
		return false;
    }
};

int main()
{
	Solution s;
	cout << s.isSubsequence("axc","ahbgdc") <<endl;	
}
