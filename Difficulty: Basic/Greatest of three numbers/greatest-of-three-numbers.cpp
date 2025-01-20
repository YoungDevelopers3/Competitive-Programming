//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int greatestOfThree(int A, int B, int C) {
        int result=0;
        if(A>B && A>C){
            result=A;
        }
        else if(B>A && B>C){
            result=B;
        }
        else{
            result=C;
        }
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B, C;
        cin >> A >> B >> C;
        Solution ob;
        cout << ob.greatestOfThree(A, B, C) << "\n";
    
cout << "~" << "\n";
}
}

// } Driver Code Ends