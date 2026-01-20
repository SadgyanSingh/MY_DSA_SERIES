class Solution {
public:
    int countDigits(int num) {

        int temp  = num;
        int val;
        int count = 0;

        while(temp != 0){
            val = temp%10;
            if(num % val == 0){
                count++;
            }
            temp = temp/10;
        }
        return count;
        
    }
};