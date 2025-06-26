class Solution {
  public:
    int myAtoi(char *s) {
        int i=0,sign=1;
        long long ans=0;
        while(s[i]==' '){
            i++;
        }
        if(s[i]=='-'){
            i++;
            sign=-1;
        }
        
        while(s[i]>='0' && s[i]<='9'){
            ans=ans*10+s[i]-'0';
            i++;
            if(sign==-1 && sign*ans<INT_MIN){
                    return INT_MIN;
            }
            if(sign==1 && sign*ans>INT_MAX){
                return INT_MAX;
            }
        }
        ans=ans*sign;
        return ans;
        
    }
};