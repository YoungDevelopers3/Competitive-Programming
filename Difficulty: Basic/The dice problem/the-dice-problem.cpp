//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int oppositeFaceOfDice(int n) {
        int result=0;
        switch(n){
            case 1:
            result=6;
            break;
            case 2:
            result=5;
            break;
            case 3:
            result=4;
            break;
            case 4:
            result=3;
            break;
            case 5:
            result=2;
            break;
            case 6:
            result=1;
            break;
        }
        return result;// Write Your Code here
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