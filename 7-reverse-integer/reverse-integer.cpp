class Solution {
public:
    int reverse(int x) {
        
        long long ans=0;
        if(x>0){
            string num=to_string(x);
            std::reverse(num.begin(),num.end());
            ans=stoll(num);
        }
        else{
            if(x==INT_MIN){
                return 0;
            }
            x=x*-1;
            string num=to_string(x);
            std::reverse(num.begin(),num.end());
            ans=stoll(num);
            // if(ans>INT_MAX){
            //     return 0;
            // }
            ans=ans*-1;
        }
        if(ans<INT_MAX && ans>INT_MIN){
            return ans;
        }
        return 0;
    }
};