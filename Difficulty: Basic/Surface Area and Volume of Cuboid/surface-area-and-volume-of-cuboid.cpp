//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> find(int l, int b, int h) {
        vector<int>result;
        int sa=0,v=0;
        sa=2*((l*b)+(b*h)+(l*h));
        v=l*b*h;
        result.push_back(sa);
        result.push_back(v);
        
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int l, b, h;
        cin >> l >> b >> h;
        Solution ob;
        vector<int> ans = ob.find(l, b, h);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends