class Solution {
  public:
    int evaluatePostfix(vector<string>& arr) {
        stack<int>st;
        for(string t:arr){
            if(t!="+" && t!="-" && t!="*" && t!="/" && t!="^"){
                int num=stoi(t);
                st.push(num);
            }
            else{
                if(!st.empty()){
                    int n1=st.top();
                    st.pop();
                    int n2=st.top();
                    st.pop();
                    if(t=="+"){
                        st.push(n1+n2);
                    }
                    else if(t=="*"){
                        st.push(n1*n2);
                    }
                    else if(t=="-"){
                        st.push(n2-n1);
                    }
                    else if(t=="^"){
                        st.push(pow(n2,n1));
                    }
                    else{
                        st.push(floor((double)n2/n1));
                    }
                }
            }
        }
        return st.top();
        
    }
};