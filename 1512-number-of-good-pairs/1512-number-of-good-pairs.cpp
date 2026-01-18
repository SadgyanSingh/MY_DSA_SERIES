class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        int count = 0;

         for(int i =0; i< nums.size();i++){
            for(int j = i;j<nums.size();j++){
                if (nums[i]==nums[j]){
                    if(i < j){
                        count++;
                    }
                }
            }
        }
       return count; 
        
    }
};