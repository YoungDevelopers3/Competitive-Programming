//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int maxConsecutiveCount(vector<int> &arr) {
        int one=0,max_one=0;
        int zero=0,max_zero=0;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1){
                one++;
                zero=0;
            }
            else{
                zero++;
                one=0;
            }
            max_one=max(max_one,one);
            max_zero=max(max_zero,zero);
        }
        return max(max_one,max_zero);
    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.maxConsecutiveCount(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends