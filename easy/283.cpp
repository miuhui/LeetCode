#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    	int iCounter = 0;
        for(int i =0;i<nums.size();i++){
            if(nums[i] ==0) {
                iCounter++;
            }
            else {
                nums[i-iCounter] = nums[i];
            }
        }
        
        for(int i = (nums.size()-iCounter);i<nums.size();i++){
            nums[i]=0;
        }
    }       
    
};
int main() {
	return 0;
}
