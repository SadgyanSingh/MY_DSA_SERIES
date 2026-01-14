class Solution {
public:
    string largestOddNumber(string num) {
        // Iterate from right to left
        for (int i = num.length() - 1; i >= 0; i--) {
            // Check if current digit is odd
            if ((num[i] - '0') % 2 == 1) {
                // Return substring from start to this position
                return num.substr(0, i + 1);
            }
        }
        // No odd digit found
        return "";
    }
};