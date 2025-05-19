//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findElement(vector<int> &arr) {
        int low=0;
        int high=arr.size()-1;
        int i=0;
        int ans=-1;
        while(low<high && low<arr.size() && high>=0 && i<arr.size()){
            if(arr[low]<arr[i] && arr[high]>arr[low]){
                low++;
                high--;
                ans=arr[i];
            }
            else{
                i++;
                low=0;
                high=arr.size()-1;
                ans=-1;
            }
        }
        
        return ans;
        
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
        int ans = ob.findElement(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends