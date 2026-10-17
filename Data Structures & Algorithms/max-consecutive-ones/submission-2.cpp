class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int con = 0;
        int max = 0;
        for(int i: nums){
            if(i == 1){
                con++;
            }
            else if(i != 1 && con > max){
                
                max = con;
                con = 0;
            }
            else{
                con = 0;
            }
        }
        if(con > max && con != 0){
            max = con;
        }
        return max;
        
    }
};