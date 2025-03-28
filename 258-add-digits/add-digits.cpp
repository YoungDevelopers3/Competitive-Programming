class Solution {
public:

    void check(int n,int &sum){
     while(n>0){
        int d=n%10;
        sum=sum+d;
        n=n/10;
     }
    }
    int addDigits(int num) {
        int sum=0;
        check(num,sum);
        num=sum;
        while(num>=10){
            sum=0;
            check(num,sum);
            num=sum;
        }
        return num;
    }
};