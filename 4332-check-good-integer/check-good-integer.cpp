class Solution {
public:
    bool checkGoodInteger(int n) {
        int sq=0;
        int digi=0;
        while(n>0){
            int d=n%10;
            sq=sq+(d*d);
            digi=digi+d;
            n=n/10;
        }
        if(sq-digi>=50){
            return true;
        }
        return false;
        
    }
};