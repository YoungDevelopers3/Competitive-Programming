class Solution {
public:
    int addDigits(int num) {
        int n=num;
        while(true){
            int sum=0;
            if(n<10){
                return n;
            }
            while(n>0){
             int d=n%10;
             sum=sum+d;
             n=n/10;
            }
            n=sum;
        }
    }
};