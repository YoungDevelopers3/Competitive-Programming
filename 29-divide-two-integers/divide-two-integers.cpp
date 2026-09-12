class Solution {
public:
    int divide(int dividend, int divisor) {
        //edge cases
        if(dividend==divisor){
            return 1;
        }
        if(dividend==INT_MIN && divisor==-1){
            return INT_MAX;
        }
        
        if(divisor==1){
            return dividend;
        }

        bool isPositive=true;
        if((dividend <0 && divisor>0)||(dividend >0 && divisor<0)){
            isPositive=false;
        }

        long long dividend_abs=abs((long long)dividend);
        long long divisor_abs=abs((long long)divisor);

        int count=0;
        long long sum=0;

        while(sum+divisor_abs<=dividend_abs){
            count++;
            sum=sum+divisor_abs;
        }

        if(isPositive){
            return count;
        }
        return -count;
        











    }
};