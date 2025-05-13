//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        vector<int>p;
        vector<int>n;
        for(int i:arr){
            if(i<0){
                n.push_back(i);
            }
            else{
                p.push_back(i);
            }
        }
        arr.clear();
        for(int i:p){
            arr.push_back(i);
        }
        for(int i:n){
            arr.push_back(i);
        }
        
        
        
        
        
        
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        ob.segregateElements(nums);

        for (int x : nums)
            cout << x << " ";
        cout << "\n~\n";
    }
}
// } Driver Code Ends