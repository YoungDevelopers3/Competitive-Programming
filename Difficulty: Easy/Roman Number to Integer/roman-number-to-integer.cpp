//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int romanToDecimal(string &s) {
        unordered_map<char,int>freq={{'I',1},{'V',5},{'L',50},{'C',100},
        {'D',500},{'M',1000},{'X',10}};
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(i<s.size()-1 && freq[s[i]]>=freq[s[i+1]]){
                sum=sum+freq[s[i]];
            }
            else if(i==s.size()-1){
                sum=sum+freq[s[i]];
            }
            else{
                sum=sum-freq[s[i]];
            }
        }
        return sum;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends