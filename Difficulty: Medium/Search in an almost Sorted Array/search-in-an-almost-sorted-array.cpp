//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int findTarget(vector< int >& arr,  int target) {
        
         int l = 0, r = arr.size() - 1;

    while (r >= l) {
        int mid = l + (r - l) / 2;

        // Check the middle 3 positions
        if (arr[mid] == target) 
            return mid;
        if (mid > l && arr[mid - 1] == target) 
            return mid - 1;
        if (mid < r && arr[mid + 1] == target) 
            return mid + 1;

        // Search in left subarray
        if (arr[mid] > target) 
            r = mid - 2;
        // Search in right subarray
        else 
            l = mid + 2;
    }
    return -1; // Elem
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t-- > 0) {
        string str;
        getline(cin, str);

        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }

        int target;
        cin >> target;
        cin.ignore();
        Solution sln;
        int ans = sln.findTarget(arr, target);
        cout << ans << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends