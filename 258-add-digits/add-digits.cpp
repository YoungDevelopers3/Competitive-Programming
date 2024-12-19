class Solution {
public:
    int addDigits(int num) {
        while(true){

            if(num<10){
                return num;
            }
            int sum=0;
            while(num){
                int d = num%10;
                sum = sum+d;
                num = num/10;
            }
            num = sum;
        }
    }
};