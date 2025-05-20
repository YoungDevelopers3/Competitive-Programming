class Solution {
  public:
    string reverse(const string& S) {
        stack<char>st;
        string str="";
        for(char ch:S){
            st.push(ch);
        }
        
        while(st.size()>0){
            char ch=st.top();
            str=str+ch;
            st.pop();
        }
        return str;
        
        
    }
};
