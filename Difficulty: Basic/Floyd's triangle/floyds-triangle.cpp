//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void printFloydTriangle(int n) {
    int num=1;

for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<num++<<" ";
    }
    cout<<endl;
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
        ob.printFloydTriangle(N);

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends