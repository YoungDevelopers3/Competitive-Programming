//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void print(int i,int n){
        if(i>n){
            return;
        }
        cout<<i<<" ";
        print(i+1,n);
    }
  
  
    void printTillN(int n) {
        int i=1;
        print(i,n);
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
        ob.printTillN(N);
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends