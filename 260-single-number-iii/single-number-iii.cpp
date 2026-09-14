class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int result=0;
        for(int i:nums){
            result=result^i;
        }
        int a =0;
        int b=0;
      int diff=result & (-(unsigned int )result);
        for(int n:nums){
            if(n & diff){
                a=a^n;
            }
            else{
                b=b^n;
            }
        }
        return {a,b};
    }
};