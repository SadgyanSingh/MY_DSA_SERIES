class Solution {
public:
    int minPairSum(vector<int>& nums) {
        vector<int>pair;
        sort(nums.begin(),nums.end());
        for(int i = 0,j = nums.size()-1;i<j;i++,j--){
            pair.push_back(nums[i]+nums[j]);
        }
        sort(pair.begin(),pair.end());
        return pair[pair.size()-1];
    }
};