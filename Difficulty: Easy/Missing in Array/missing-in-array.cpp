//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size()+1;
        vector<int>temp;
        for(int i=1;i<=n;i++){
            temp.push_back(i);
        }
        for(int i:arr){
            temp.push_back(i);
        }
        unordered_map<int ,int>freq;
        for(int i:temp){
            freq[i]++;
        }
        int ans=0;
        for(auto pair:freq){
            if(pair.second==1){
                ans=pair.first;
            }
        }    
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.missingNumber(a) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends