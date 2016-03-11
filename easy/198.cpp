#include<vector>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
    	if (nums.size() == 0) 
    	{
    		return 0;
		}
		int best0 = 0;
		int best1 = 0;
		for (int i = 0; i < nums.size(); i++) {
			int temp = best0;
			best0 = max(best0, best1);
			best1 = temp + nums[i];
		}
		return max(best0, best1);
    }
};
int main() {
	
	return 0;
}
