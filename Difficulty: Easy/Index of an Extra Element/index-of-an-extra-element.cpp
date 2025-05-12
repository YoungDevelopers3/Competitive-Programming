//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        unordered_map<int,int>freq_b;
        for(int i:b){
            freq_b[i]++;
        }
        for(int i=0;i<a.size();i++){
            if(freq_b[a[i]]==0){
                return i;
            }
        }
        return 0;
        
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr1, arr2;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr1.push_back(number);
        }

        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr2.push_back(number1);
        }

        Solution ob;
        int ans = ob.findExtra(arr1, arr2);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends