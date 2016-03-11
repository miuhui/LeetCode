#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int> > generate(int numRows) {
    	vector<vector<int> > result;
    	if (numRows <= 0) {
    		return result;
		}
		vector<int> last(1,1);
		result.push_back(last);
		for (int i = 1; i < numRows; i++) {
			last.push_back(0);
			vector<int> cur = last;
			for (int j = 1; j <= i; j++) {
				cur[j] = last[j] + last[j-1];
			}
			result.push_back(cur);
			last = cur;
		}
    }
};

int main() {
	return 0;
}
