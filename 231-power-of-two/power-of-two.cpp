class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;
        
        while (n > 1) {
            if (n % 2 != 0) return false;   // not divisible by 2 → not power of 2
            n = n / 2;
        }
        return true;
    }
};