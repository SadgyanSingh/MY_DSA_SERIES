class Solution {
public:
    int sumOfMultiples(int n) {
        int sum = 0;
        
        // Add sum of multiples of 3
        int m3 = n / 3;
        sum += 3 * m3 * (m3 + 1) / 2;
        
        // Add sum of multiples of 5
        int m5 = n / 5;
        sum += 5 * m5 * (m5 + 1) / 2;
        
        // Add sum of multiples of 7
        int m7 = n / 7;
        sum += 7 * m7 * (m7 + 1) / 2;
        
        // Subtract sum of multiples of 15 (LCM of 3 and 5)
        int m15 = n / 15;
        sum -= 15 * m15 * (m15 + 1) / 2;
        
        // Subtract sum of multiples of 21 (LCM of 3 and 7)
        int m21 = n / 21;
        sum -= 21 * m21 * (m21 + 1) / 2;
        
        // Subtract sum of multiples of 35 (LCM of 5 and 7)
        int m35 = n / 35;
        sum -= 35 * m35 * (m35 + 1) / 2;
        
        // Add sum of multiples of 105 (LCM of 3, 5, and 7)
        int m105 = n / 105;
        sum += 105 * m105 * (m105 + 1) / 2;
        
        return sum;
    }
};