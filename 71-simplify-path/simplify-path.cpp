class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        int n=path.size();
        for(int i=0;i<n;i++){
            string temp="";
            if(path[i]=='/'){
                continue;
            }
            while(i<n && path[i]!='/'){
                temp=temp+path[i];
                i++;
            }
            if(temp=="."){
                continue;
            }
            else if(temp==".."){
                 if(!st.empty()){
                    st.pop();
                 }
                 else{
                    continue;
                 }
            }
            else{
                st.push(temp);
            }

        }
        string answer="";
        while(!st.empty()){
            answer='/'+st.top()+answer;
            st.pop();
        }
        if(answer.size()==0){
            answer="/";
        }
        return answer;

    }
};