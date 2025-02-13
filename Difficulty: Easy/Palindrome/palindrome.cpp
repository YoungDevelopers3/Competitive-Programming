//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool PalindromeChecker(int l,int r,string &s){
        // cout<<l<<" "<<r<<" "<<s[l]<<" "<<s[r]<<"\n";
        if(l>=r){
            return true;
        }
        if(s[l]!=s[r]){
            return false;
        }
        // cout<<l<<" "<<r<<" "<<s<<endl;
        return PalindromeChecker(l+1,r-1,s);
        // return true;
        
    }
  
  
  
    bool isPalindrome(int n) {
      
      string s=to_string(n);
      return PalindromeChecker(0,s.size()-1,s);
      
      
      
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        bool ans = ob.isPalindrome(n);
        cout << (ans ? "true" : "false") << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends