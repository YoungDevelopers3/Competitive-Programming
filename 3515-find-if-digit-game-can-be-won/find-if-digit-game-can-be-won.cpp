class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum_single=0,sum_double=0;
        for(int i:nums){
            if(i>=0 && i<=9){
                sum_single=sum_single+i;
            }
            else{
                sum_double=sum_double+i;
            }
        }
        if(sum_single==sum_double){
            return false;
        }
        return true;

    }
};