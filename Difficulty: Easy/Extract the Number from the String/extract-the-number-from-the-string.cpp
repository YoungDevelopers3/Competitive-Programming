//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long ExtractNumber(string sentence) {

    stringstream ss(sentence);
    string word;
   long long int maxNum = -1;

    while (ss >> word) {
        bool isNumber = true, hasNine = false;

        for (char c : word) {
            if (c < '0' || c > '9') {
                isNumber = false;
                break;
            }
            if (c == '9') hasNine = true;
        }

        if (isNumber && !hasNine) {
            maxNum = max(maxNum, stoll(word));
        }
    }

    return maxNum;
    }
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n~\n";
    }

    return 0;
}

// } Driver Code Ends