class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x==0) return true;
        long int rev=0;
        long int original=x;
        while(x>0){
        int d=x%10;
         rev=rev*10+d;
         x=x/10;
        }
        if(original==rev){
            return true;
        }
        else{
            return false;
        }
    }
};