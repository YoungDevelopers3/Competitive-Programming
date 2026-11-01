class Solution {
public:
    string decodeString(string s) {
        stack<pair<string,int>>st;
        string current="";
        int num=0;
        for(char ch:s){
            if(isdigit(ch)){
                num=num*10+(ch-'0');
            }
            else if(ch=='['){
                st.push({current,num});
                current="";
                num=0;
            }
            else if(ch==']'){
                auto [prev,k]=st.top();
                st.pop();
                string repeating="";
                for(int i=0;i<k;i++){
                    repeating+=current;
                }
                current=prev+repeating;
            }
            else{
                current+=ch;
            }
        }
        return current;
    }
};