class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int ele_sum=0,digi_sum=0;
        for(int i:nums){
            ele_sum=ele_sum+i;
            int n=i;
            while(n>0){
                int d=n%10;
                digi_sum=digi_sum+d;
                n=n/10;
            }
        }
        return abs(digi_sum-ele_sum);


    }
};