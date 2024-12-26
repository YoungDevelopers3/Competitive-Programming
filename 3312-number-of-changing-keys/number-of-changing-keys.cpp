class Solution {
public:
    int countKeyChanges(string s) {
        int c=0;
        for(int i=0;i<s.length()-1;i++){
           if(s[i+1]!=char(s[i]+32) && s[i+1]!=char(s[i]-32)&& (s[i+1]!=s[i]))
           {
            c++;
           }
           
        }
        return c;
        
    }
};