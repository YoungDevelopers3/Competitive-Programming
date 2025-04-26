//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to check if a string can be obtained by rotating
    // another string by exactly 2 places.
    bool isRotated(string& s1, string& s2) {
        
        int k=2,n=s1.size();
        string left_rotated(n,' ');
        string right_rotated(n,' ');
        
        for(int i=0;i<n;i++){
            left_rotated[(i-k+n)%n]=s1[i];
            right_rotated[(i+k)%n]=s1[i];
        }
        
        if(left_rotated==s2 || right_rotated==s2){
            return true;
        }
        return false;
        
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        string b;
        cin >> s >> b;
        cin.ignore();
        Solution obj;
        cout << (obj.isRotated(s, b) == 0 ? "false" : "true") << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends