class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        int result = 0;
        int multiplier = 1;
        
        // Process each of the 4 digit positions
        for (int i = 0; i < 4; i++) {
            // Extract the rightmost digit from each number
            int digit1 = num1 % 10;
            int digit2 = num2 % 10;
            int digit3 = num3 % 10;
            
            // Find minimum digit at this position
            int minDigit = min({digit1, digit2, digit3});
            
            // Add to result
            result += minDigit * multiplier;
            
            // Move to next digit position
            num1 /= 10;
            num2 /= 10;
            num3 /= 10;
            multiplier *= 10;
        }
        
        return result;
    }
};