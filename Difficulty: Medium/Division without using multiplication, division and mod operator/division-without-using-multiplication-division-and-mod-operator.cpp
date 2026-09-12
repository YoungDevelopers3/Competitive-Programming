class Solution {
  public:
    int divide(int a, int b) {
        // code here
        if(a==b){
            return 1;
        }
        
        if(a==INT_MIN && b==-1){
            return INT_MAX;
        }
        
        if(b==1){
            return a;
        }
        
        bool isPositive=true;
        if((a<0 && b>0)||(a>0 && b<0)){
            isPositive=false;
        }
        
        long long dividend_abs=abs((long long)a);
        long long divisor_abs=abs((long long)b);
        
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