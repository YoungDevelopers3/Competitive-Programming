class Solution {
public:
    bool isPowerOfFour(int n) {
        int c=0;
        int num=n;
        while(num>0){
            if(num%4==0){
                c++;
                num=num/4;  
            }
            else{
                break;
            }
        }
        int a=pow(4,c);
        if(a==n){
            return true;
        }
        return false;
    }
};