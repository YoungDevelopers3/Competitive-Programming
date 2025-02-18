//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string electionWinner(vector<string>& arr) {
       unordered_map<string,int>freq;
       string ans="";
       for(string st:arr){
           freq[st]++;
       }
       int max_f=INT_MIN;
       for(auto p:freq){
           if(p.second>max_f){
               max_f=p.second;
               ans=p.first;
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
        string str;
        getline(cin, str);

        stringstream ss(str);
        vector<string> arr;
        string s;
        while (ss >> s) {
            arr.push_back(s);
        }
        Solution ob;
        cout << ob.electionWinner(arr) << endl;
    }
}

// } Driver Code Ends