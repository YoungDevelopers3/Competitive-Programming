class Solution {
  public:
    // Function to delete middle element of a stack.
    void rec(int k,stack<int>& s){
        if(k==1){
            s.pop();
            return;
        }
        int temp=s.top();
        s.pop();
        rec(k-1,s);
        s.push(temp);
        
    }
    void deleteMid(stack<int>& s) {
       if(s.size()==0){
            return;
        }
        int k=floor((s.size()/2)+1);
        rec(k,s);
    }
};