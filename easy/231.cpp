class Solution {
public:
    bool isPowerOfTwo(int n) {
      return n > 0 && int(pow(2, 62)) % n == 0;
    }
};
