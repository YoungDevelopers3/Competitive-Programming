class Solution {
public:
    int countDigits(int num) {
        int n=num;
        int div=0;
        while(n>0){
            int d=n%10;
            if(num%d==0){
                div++;
            }
            n=n/10;
        }
       return div;
    }
};