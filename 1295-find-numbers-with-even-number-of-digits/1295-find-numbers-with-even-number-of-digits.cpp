class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int result = 0;
        for(int num : nums) {
            if(to_string(num).length() % 2 == 0) {
                result++;
            }
        }
        return result;
    }
};