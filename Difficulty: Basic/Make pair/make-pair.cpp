//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

/*
X, Y: two numbers whose pair is to be returned
*/

pair<int, int> makePair(int x, int y) {
    pair<int,int>p={x,y};
    return p;
    // Return a pair of X and Y
}

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;

    while (t--) {
        int X, Y;

        // Input two elements to make them as a pair
        cin >> X >> Y;
        pair<int, int> ans = makePair(X, Y);
        cout << "(" << ans.first << "," << ans.second << ")" << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends