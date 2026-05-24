class Solution {
public:
    int passwordStrength(string password) {
        int ans=0;
        vector<char>check;
        for(int i=0;i<password.size();i++){
            char ch=password[i];
            auto p=find(check.begin(),check.end(),ch);
            if(p!=check.end()){
                continue;
            }
            check.push_back(ch);
           
            if(ch>='a' && ch<='z'){
                    ans=ans+1;
            }
            else if(ch>='A' && ch<='Z'){
                ans=ans+2;
            }
            else if(ch>='0' && ch<='9'){
                ans=ans+3;
            }
            else{
                ans=ans+5;
            }
            
        }
        return ans;
    }
};