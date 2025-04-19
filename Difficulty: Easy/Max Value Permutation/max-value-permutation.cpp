//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxValue(vector<int> &arr) {
        long long int mod=1e9+7;
        sort(arr.begin(),arr.end());
       long long int sum=0;
        for(int i=0;i<arr.size();i++){
            

          sum=(sum%mod+(((arr[i]%mod)*(i%mod))%mod*1LL))%mod;

        }
       
        return sum;
        
        
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
        //  cin.ignore();
        int n = arr.size();
        Solution ob;
        cout << ob.maxValue(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends