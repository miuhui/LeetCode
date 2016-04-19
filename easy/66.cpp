class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      if (digits.empty()) {
            return digits;
        }
        int len = digits.size();
        vector<int>::iterator it = digits.begin();
        int jinwei = 1;
        for (int i = len - 1; i >= 0; i--) {
            if (digits[i] <= 9 && jinwei == 0) {
                return digits;
            }
            else if (digits[i] < 9 && jinwei == 1) {
                digits[i] += jinwei;
                jinwei = 0;
                continue;
                
            }
            else if (digits[i] == 9 && jinwei == 1) {
                digits[i] = 0;
                jinwei = 1;
                continue;
            }
        }
        if (jinwei == 1) {
            digits.insert(it, 1);
            jinwei = 0;
        }
        return digits;
    }
};
