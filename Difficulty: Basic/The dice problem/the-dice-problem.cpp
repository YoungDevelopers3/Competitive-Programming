//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int oppositeFaceOfDice(int n) {
        switch(n){
        case 1:
        return 6;
        
        case 2:
        return 5;
        
        case 3:
        return 4;
        
        case 4:
        return 3;
        
        case 5:
        return 2;
        
        case 6:
        return 1;
            
        }
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.oppositeFaceOfDice(N);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends