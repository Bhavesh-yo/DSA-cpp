class Solution {
public:
    bool isPalindrome(int x) {
        
        // Negative numbers cannot be palindrome
        if(x < 0) {
            return false;
        }
        
        int original = x;
        long long reversed = 0;   // long long to avoid overflow
        
        while(x > 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x = x / 10;
        }
        
        return original == reversed;
    }
};