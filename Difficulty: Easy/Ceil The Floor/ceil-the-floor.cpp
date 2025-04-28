//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        vector<int>temp;
        sort(arr.begin(),arr.end());
        int low=0;
        int high=arr.size()-1;
        int floor=0,ceil=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==x){
                floor=arr[mid];
                ceil=arr[mid];
                break;
            }
            else if(arr[mid]>x){
                ceil=arr[mid];
                high=mid-1;
            }
            else{
                floor=arr[mid];
                low=mid+1;
            }
            
        }
        if(floor==0){
            floor=-1;
        }
       else if(ceil==0){
            ceil=-1;
        }
        temp.push_back(floor);
        temp.push_back(ceil);
        
        return temp;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n~\n";
    }
    return 0;
}
// } Driver Code Ends