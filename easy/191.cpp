class Solution {
public:
    int hammingWeight(uint32_t n) {
        int NumOf1 = 0;
        while(n) {
        	if (n%2 == 1) {
        		NumOf1++;
			}
			n /= 2;
		}
		return NumOf1;
    }
};
