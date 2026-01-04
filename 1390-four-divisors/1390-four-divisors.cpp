class Solution {
public:
    int sumFourDivisors(vector<int>& arr) {
        
        int totalSum = 0;

        for(int i = 0; i < arr.size(); i++){
            int count = 0;
            int TempSum = 0;

            for(int j = 1; j * j <= arr[i]; j++){
                if(arr[i] % j == 0){
                    if(j == arr[i] / j){
                        count++;
                        TempSum += j;
                    } else {
                        count += 2;
                        TempSum += j + (arr[i] / j);
                    }
                }
                if(count > 4) break; 
            }

            if(count == 4){          
                totalSum += TempSum;
            }
        }
        return totalSum;
    }
};
