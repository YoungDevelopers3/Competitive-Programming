//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string firstRepChar(string s) {
      string res="";
      unordered_map<char,int>freq;
      for(char ch:s){
          freq[ch]++;
          if(freq[ch]>1){
              res=res+ch;
              return res;
          }
      }
      return "-1";
    
    }
};

//{ Driver Code Starts.
//    Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.firstRepChar(str) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends