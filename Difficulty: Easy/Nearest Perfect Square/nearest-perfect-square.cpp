//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> nearestPerfectSquare(int N) {
           int lower=floor(sqrt(N));
           int upper=ceil(sqrt(N));
           int diff_lower=abs(N-(lower*lower));
           int diff_upper=abs(N-(upper*upper));
           vector<int>result;
           if(diff_lower<diff_upper){
               result.push_back((lower*lower));
               result.push_back(diff_lower);
           }
           
           else{
                result.push_back((upper*upper));
                result.push_back(diff_upper);
               
           }
           return result;
           
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
        vector<int> ans = ob.nearestPerfectSquare(N);
        cout << ans[0] << " " << ans[1] << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends