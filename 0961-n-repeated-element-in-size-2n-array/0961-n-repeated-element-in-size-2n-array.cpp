class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {

        for(int i = 0; i< nums.size(); i++){
            int count = 0;
            for(int j = 0; j<nums.size(); j++){

                if(nums[i] == nums[j]){
                    count++;
                    if(count * 2 == nums.size()){
                        return nums[i];
                    }
                }
            }
        }
      return -1;
    }
};