//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:

    string removeDups(string &s) {
        unordered_set<char>s1;
        string st="";
        for(char ch:s){
            if(s1.find(ch)==s1.end()){
                s1.insert(ch);
                st=st+ch;
            }
        }
        return st;
    }
};


//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.removeDups(s) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends