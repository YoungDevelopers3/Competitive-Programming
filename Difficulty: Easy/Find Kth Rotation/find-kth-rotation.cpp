//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int low=0;
        int n=arr.size();
        int high=n-1;
        int mini=INT_MAX;
        int rotations=0;
        while(low<=high){
            int mid=(low+high)/2;
            //If the left half is sorted
            if(arr[low]<=arr[mid]){
                mini=min(mini,arr[low]);
                low=mid+1;
            }
            //If the left half is sorted
            else{
                mini=min(mini,arr[mid]);
                high=mid-1;
            }
        }
        rotations=find(arr.begin(),arr.end(),mini)-arr.begin();
        return rotations;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends