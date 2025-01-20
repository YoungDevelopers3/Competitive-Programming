//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    double findMedian(vector<int> &arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int low=0;
        int high=n-1;
        double md=0;
        if(n%2!=0){
            int mid=low+(high-low)/2;
            md=arr[mid];
        }
        else{
            int mid=low+(high-low)/2;
            md=double(arr[mid]+arr[mid+1])/2;
        }
        return md;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        cout << ob.findMedian(arr) << endl;
    }
}

// } Driver Code Ends