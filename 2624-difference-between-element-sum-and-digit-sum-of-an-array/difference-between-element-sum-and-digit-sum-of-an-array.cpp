class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sumele=0,sumdigi=0;
        for(int i:nums){
            sumele=sumele+i;
        }
        for(int n:nums){
            while(n>0){
                int d=n%10;
                sumdigi=sumdigi+d;
                n=n/10;
            }
        }
        int diff=abs(sumele-sumdigi);
        return diff;
    }
};