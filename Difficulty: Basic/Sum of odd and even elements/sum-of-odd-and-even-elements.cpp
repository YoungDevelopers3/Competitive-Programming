//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findSum(int n) {
       int se=0,so=0;
       for(int i=1;i<=n;i++){
           if(i%2==0){
               se=se+i;
           }
           else{
               so=so+i;
           }
       }
       vector<int>result={so,se};
       return result;
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
        vector<int> ans = ob.findSum(n);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends