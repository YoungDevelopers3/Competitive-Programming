class Solution {
public:
    bool isPowerOfThree(int n) {
        int c=0;
        int num=n;
        while(num>0){
            if(num%3==0){
                c++;
                num=num/3;  
            }
            else{
                break;
            }
        }
        int a=pow(3,c);
        if(a==n){
            return true;
        }
        return false;
    }
};