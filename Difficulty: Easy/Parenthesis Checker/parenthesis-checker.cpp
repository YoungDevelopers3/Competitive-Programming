//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isParenthesisBalanced(string& s) {
       stack<char>st;
       for(char ch:s){
           if((ch==')'||ch=='}'||ch==']') && st.empty()){
               return false;
           }
           else{
               
               if(ch=='('||ch=='{'||ch=='['){
               st.push(ch);
           }
           else if((ch==')' && st.top()=='(')||( ch=='}' && st.top()=='{')||(ch==']' && st.top()=='[')){
               st.pop();
           }
           else{
               return false;
           }
               
              
           }
           
       }
       if(st.empty()){
           return true;
       }
       else{
           return false;
       }
       
       
       
       
       
       
       
       
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isParenthesisBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends