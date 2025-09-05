class Solution {
  public:
    double power(double b, int e) {
        if(e==0)return 1;
        if(b==1)return 1;
        if(b==0)return 0;
        if(b==-1 && e%2==0)return 1;
        if(b==-1 && e%2!=0)return -1;
        
        double ans=1.0;
        
        int BinForm=e;
        if(e<0){
            b=1/b;
            BinForm=-BinForm;
        }
        
        while(BinForm>0){
            if(BinForm%2==1){
                ans=ans*b;
            }
            b=b*b;
            BinForm=BinForm/2;
        }
        
        return ans;
        
        
    }
};