class Solution {
  public:
  stack<pair<int,int>>st;
    Solution() {
        
        
    }

    // Add an element to the top of Stack
    void push(int x) {
        
        if(st.empty()){
            st.push({x,x});
        }
        else{
            int mini=min(x,st.top().second);
            st.push({x,mini});
        }
    }

    // Remove the top element from the Stack
        
    void pop() {
        if(!st.empty()){
            st.pop();
        }
        
    }

        
    // Returns top element of the Stack
    int peek() {
        if(!st.empty()){
            return st.top().first;
        }
        else{
            return -1;
        }
        
    }
        

    // Finds minimum element of Stack
    int getMin() {
        if(!st.empty()){
            return st.top().second;
        }
        else{
            return -1;
        }
        
    }
};