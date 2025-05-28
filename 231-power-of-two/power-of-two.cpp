class Solution {
public:
    bool isPowerOfTwo(int n) {
        int temp=n;
       long long int counter=0;
       long long mod=1000000007;
        if(n==1){
            return true;
        }
        else{
              while(temp>1){
               temp=temp/2;
               counter++;
               counter=counter%mod;
              }
        if(pow(2,counter)==n){
            return true;
        }
        
        }
        return false;
    }
};