class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1,sum=0;
        while(n>0){
            int d=n%10;
            prod=prod*d;
            sum=sum+d;
            n=n/10;
        }
        return prod-sum;
    }
};