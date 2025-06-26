class Solution {
public:
    int myAtoi(string s) {
       while (!s.empty() && s[0] == ' ') {
        s.erase(0, 1);
    }
    int sign=1;
    if(!s.empty() &&(s[0]=='-'||s[0]=='+')){
        if(s[0]=='-'){
            sign=-1;
        }
        if(s[0]=='+'){
            sign=1;
        }
        s.erase(0,1);
    }

       string n1="";
       for(char ch:s){
        if(!isdigit(ch)){
              break;
        }
        else{
            n1=n1+ch;
        }

       }
      if(n1.empty()){
        return 0;
       }
       long long ans=0;
       for(char ch:n1){
        ans=ans*10+ch-'0';
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