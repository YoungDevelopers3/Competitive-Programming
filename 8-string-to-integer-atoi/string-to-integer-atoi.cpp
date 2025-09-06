class Solution {
public:
    int myAtoi(string s) {
        while(!s.empty() && s[0]==' '){
            s.erase(0,1);
        }
        int sign=1;
        if(!s.empty() && (s[0]=='-' || s[0]=='+')){
          if(s[0]=='-'){
            sign=-1;
            s.erase(0,1);
          }
          else{
            sign =1;
            s.erase(0,1);
          }
                
        }
         
        string temp="";
        if(!s.empty()){
            for(char ch:s){
                if(!isdigit(ch)){
                    break;
                }
                else{
                    temp=temp+ch;
                }
            }
           
        }
        long long ans=0;
        if(temp.empty()){
            return ans;
        }
        else{
            for(int i=0;i<temp.size();i++){
                ans=ans*10+temp[i]-'0';
                if(sign ==-1 && sign*ans<INT_MIN){
                    return INT_MIN;
                  }
                if(sign ==1 && sign*ans>INT_MAX){
                     return INT_MAX;
                   }
            }
        }

        return ans*sign;
        


    }
};