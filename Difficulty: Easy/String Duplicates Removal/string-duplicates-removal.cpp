//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        vector<char>temp;
        string str="";
        for(char ch:s){
            if(find(temp.begin(),temp.end(),ch)==temp.end()){
                temp.push_back(ch);
            }
        }
        
        for(char ch:temp){
            str=str+ch;
        }
        return str;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends