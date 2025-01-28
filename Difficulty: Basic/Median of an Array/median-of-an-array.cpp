//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    double findMedian(vector<int> &arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int low=0,high=n-1;
        int mid=low+(high-low)/2;
        double result=0;
        if(n%2==0){
            result=double(arr[mid]+arr[mid+1])/2;
        }
        else{
            result=arr[mid];
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