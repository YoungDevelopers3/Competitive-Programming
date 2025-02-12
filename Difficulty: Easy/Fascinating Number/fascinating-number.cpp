//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    bool fascinating(int n) {
        int a=n*2;
        int b=n*3;
        string res=to_string(n)+to_string(a)+to_string(b);
        unordered_map<char,int>freq;
        for(char ch:res){
            freq[ch]++;
        }
        
        for(int i=1;i<=9;i++){
            char ch=i+'0';
            if(freq[ch]!=1){
                return false;
            }
        }
        return true;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.fascinating(n);

        if (ans) {
            cout << "true\n";
        } else {
            cout << "false\n";
        }
        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends