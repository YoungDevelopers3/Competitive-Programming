//{ Driver Code Starts
// Initial Template for C++

// unordered_set::hash_function
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;


// } Driver Code Ends
// User function Template for C++

// Complete the function
long int HashMe(unordered_set<string> myset, string str) {

    size_t hashv=hash<string>{}(str);
    return hashv;
}


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        string str;
        cin >> str;

        unordered_set<string> myset;

        cout << HashMe(myset, str) << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends