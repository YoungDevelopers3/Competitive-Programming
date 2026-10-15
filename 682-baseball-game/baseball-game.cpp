class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(string i:operations){
            if(i=="D"){
                int x=st.top();
                st.push(2*x);
            }
            else if(i=="C"){
                st.pop();
            }
            else if(i=="+"){
                int x=st.top();
                st.pop();
                int y=st.top();
               st.push(x);
               st.push(x+y);

            }
            else{
                int num=stoi(i);
                st.push(num);
            }
        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};