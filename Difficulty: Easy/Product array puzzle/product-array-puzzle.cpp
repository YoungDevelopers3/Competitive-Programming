//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n=arr.size();
        vector<int>prefix_prod(n);
        vector<int>suffix_prod(n);
        prefix_prod[0]=1;
        suffix_prod[n-1]=1;
        for(int i=1;i<n;i++){
            prefix_prod[i]=arr[i-1]*prefix_prod[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suffix_prod[i]=arr[i+1]*suffix_prod[i+1];
        }
        vector<int>result(n);
        for(int i=0;i<n;i++){
            
            result[i]=prefix_prod[i]*suffix_prod[i];
        }
        return result;
        
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

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends