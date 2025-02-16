//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// Complete this function
bool binarySearch(vector<int>& arr, int k) {
    int low=0;
    int high=arr.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        
        if(arr[mid]==k){
            return true;
        }
        else if(arr[mid]>k){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        
    }
    return false;
    
    
    
    
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
        int k;
        cin >> k;
        cin.ignore();
        (binarySearch(arr, k)) ? cout << "true" : cout << "false";
        cout << endl;
        cout << "~\n";
    }
}

// } Driver Code Ends