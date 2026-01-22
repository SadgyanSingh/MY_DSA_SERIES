class Solution {
public:
    int differenceOfSum(vector<int>& nums) {

        int element_sum = 0;
         
        for(int i = 0; i <nums.size();i++){
            element_sum += nums[i];
        }
        int j = 0;
        int digit_sum = 0;

        while(j < nums.size()){
            
            if(nums[j] < 10){
                digit_sum += nums[j];
                j++;
            }
            else{
                int temp=nums[j];
                while(temp > 0){
                digit_sum += temp%10;
                temp = temp/10;
                }
                j++;
            }
        }
        return element_sum - digit_sum;
    }
};