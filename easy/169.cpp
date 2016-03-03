#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) { 
		if (nums.size() == 1)
			return nums[0];   	
        std::sort(nums.begin(),nums.end());
        int half = nums.size()/2;
        int count = 1;
        for (int i = 1; i < nums.size(); i++) {
        	if(nums[i] == nums[i-1]) {
        		count++;
        		if (count > half) {
        			return nums[i];
				}
			}
			else {
				count = 1;
			}
		}
    }
};
int main() {
	return 0;
}
