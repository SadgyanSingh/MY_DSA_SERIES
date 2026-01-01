class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones = 0, twos = 0;
        
        for(int num : nums) {
            twos |= ones & num;  // Add to twos if already in ones
            ones ^= num;         // Add to ones
            int threes = ones & twos;  // Find bits that appeared 3 times
            ones &= ~threes;     // Remove from ones
            twos &= ~threes;     // Remove from twos
        }
        
        return ones;
    }
};