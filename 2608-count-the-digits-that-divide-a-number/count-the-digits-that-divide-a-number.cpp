class Solution {
public:
    int countDigits(int num) {
        if(num<10){
            return 1;
        }
        else{
            int c=0;
            int temp=num;
            while(temp>0){
                int d=temp%10;
                if(num%d==0){
                   c++;
                }
                temp=temp/10;
               
            }
            return c;
        }
    }
};