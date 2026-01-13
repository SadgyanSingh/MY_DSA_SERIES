class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;
        
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
    
    int diagonalPrime(vector<vector<int>>& nums) {
        int maxPrime = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            if (nums[i][i] > maxPrime && isPrime(nums[i][i])) {
                maxPrime = nums[i][i];
            }
            
            if (nums[i][n - 1 - i] > maxPrime && isPrime(nums[i][n - 1 - i])) {
                maxPrime = nums[i][n - 1 - i];
            }
        }
        
        return maxPrime;
    }
};