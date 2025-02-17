//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// Complete this function
int vMin(vector<int>& arr) {
    auto it=min_element(arr.begin(),arr.end());
    int mini=*it;
    return mini;
}

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        cout << vMin(arr) << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends