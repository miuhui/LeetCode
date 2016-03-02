#include<string>
#include<math.h>
using namespace std;

class Solution {
public:
    int titleToNumber(string s) {
    	if(s.size() == 0)
    		return 0;
    	int result = 0;
    	int len = s.size();
        for (int i = len-1; i >= 0; i--) {
        	result += (s[i]-'A'+1)*pow(26,len-i-1);
		}
		return result;
    }
};
int main() {
	return 0;
}
