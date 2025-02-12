//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        vector<long long>res;
       long long  p=1;
        for(long long i=1;i<=n;i++){
            p=p*i;
            if(p<=n){
                res.push_back(p);
            }
            else{
                break;
            }
            
        }
        
        // int f=1;
        // for(int i=1;i<=n;i++){
        //     f=f*i;
            
        // }
        return res;
        
         
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends