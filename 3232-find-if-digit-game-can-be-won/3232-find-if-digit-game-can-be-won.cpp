class Solution {
public:
    bool canAliceWin(vector<int>& nums) {

        int single_digit = 0;
        int dubble_digit = 0;

        for (int i = 0; i < nums.size(); i++){

            if (nums[i] >= 10){
                dubble_digit += nums[i];
            }
            else{
                single_digit +=nums[i];
            }
        }
        if (single_digit > dubble_digit ||single_digit < dubble_digit){
            return true;
        }
        else{
            return false;
        }
        
    }
};