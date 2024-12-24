// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
class Solution {
public:
    double myPow(double x, int n) {
        long long N = n; // Use long long to handle INT_MIN overflow
        if (N < 0) {
            x = 1 / x;  // Convert negative exponent to positive
            N = -N;
        }
        
        double result = 1.0; // Initialize result
        while (N > 0) {
            // If the current exponent is odd, multiply the base with the result
            if (N % 2 == 1) {
                result *= x;
            }
            x *= x;      // Square the base
            N /= 2;      // Halve the exponent
        }
        
        return result;
    }
};
