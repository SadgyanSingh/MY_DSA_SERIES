class Solution {
public:
    int heightChecker(vector<int>& height) {

        int count = 0;
        vector<int>nums = height;
        sort(nums.begin(),nums.end());

        for(int i = 0;i<nums.size();i++){
            if(nums[i] != height[i]){
                count++;
            }
        }
        return count;
    }
};