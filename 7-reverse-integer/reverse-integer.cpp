class Solution {
public:
    int reverse(int x) {
        int sign = 1;
        if (x < 0) {
            sign = -1;
            if (x== INT_MIN) {
                return 0;
            }
            x = x * -1;
        }

        long long reverse = 0;
        while (x > 0) {
            int digit = x % 10;
            if (reverse > INT_MAX / 10 ||
                (reverse == INT_MAX / 10 && digit > 7))
                return 0;
            

            reverse = reverse * 10 + digit;
            x = x / 10;
        }
        return sign * reverse;
    }
};