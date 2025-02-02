//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int cubeRoot(int n) {
       return floor(cbrt(n));
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
        cout << ob.cubeRoot(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends