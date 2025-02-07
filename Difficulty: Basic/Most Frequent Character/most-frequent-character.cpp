//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string& s) {
        map<char,int>freq;
        for(char ch :s){
            freq[ch]++;
        }
        int maxfreq=INT_MIN;
        char maxc;
        for(auto p:freq){
            if(p.second>maxfreq){
                maxfreq=p.second;
                maxc=p.first;
            }
        }
        return maxc;
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution obj;
        cout << obj.getMaxOccuringChar(str) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends