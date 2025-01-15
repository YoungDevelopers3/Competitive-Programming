class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
     int n=temperatures.size()-1;
    vector<int>result;
    stack<int>st;
    for(int i=n;i>=0;i--){
        while(!st.empty() && temperatures[i]>=temperatures[st.top()]){
            st.pop();
        }
        if(!st.empty()){
            result.push_back(st.top()-i);
        }
        else{
            result.push_back(0);
        }
        
        st.push(i);
        
    }
    reverse(result.begin(),result.end());
    
    return result;

    }
};