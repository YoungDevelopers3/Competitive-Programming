class Solution {
public:
    int numberOfSteps(int num) {
        int n=num;
        int step=0;
        while(n>0){
            if(n%2==0){
                n=n/2;
                step++;
            }
            else{
                n--;
                step++;
            }
        }
        return step;
    }
};