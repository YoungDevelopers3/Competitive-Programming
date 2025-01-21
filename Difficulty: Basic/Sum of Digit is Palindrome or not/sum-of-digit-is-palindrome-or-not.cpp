//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool isDigitSumPalindrome(int n) {
        int n1=n;
        int s=0;
        while(n1>0){
            int d=n1%10;
            s=s+d;
            n1=n1/10;
        }
        
        int num=s;
        int rev=0;
        while(num>0){
            int d=num%10;
            rev=rev*10+d;
            num=num/10;
        }
        if(s==rev){
            return true;
        
        }
        else{
            return false;
            
        }
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        bool res = ob.isDigitSumPalindrome(N);
        if (res)
            cout << "true"
                 << "\n";
        else
            cout << "false"
                 << "\n";

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends