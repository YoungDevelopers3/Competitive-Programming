//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

//Back-end complete function Template for C++
class Solution {
  public:
    vector<int> list_less_than_k(vector<int> &arr, int k) {
        vector<int>res;
        for(int i:arr){
            if(i<k){
                res.push_back(i);
            }
            
        }
        return res;
    }
};


//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline after t

    while (t--) {
        string line;
        getline(cin, line); // Read the entire line as the array input
        stringstream ss(line);
        vector<int> arr;
        int num;

        while (ss >> num) {
            arr.push_back(num);
        }

        int k;
        cin >> k;
        cin.ignore(); // Ignore the newline after k

        Solution ob;
        vector<int> res = ob.list_less_than_k(arr, k);

        if (res.empty()) {
            cout << "[]" << endl;
        } else {
            for (auto it : res) {
                cout << it << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
// } Driver Code Ends