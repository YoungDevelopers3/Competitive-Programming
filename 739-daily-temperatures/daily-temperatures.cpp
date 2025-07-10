class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>ans;
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && temperatures[st.top()]<=temperatures[i]){
                st.pop();
            }
            if(!st.empty()){
                ans.push_back(abs(i-st.top()));
            }
            else{
                ans.push_back(0);
            }
            st.push(i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};