//{ Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int check(int n,int d){
         
        if(n<=0){
            return d;
        }
       n=n/10;
        d=d+1;
        check(n,d);
    }
   
   
    int countDigits(int n) {
       if(n>=0 && n<=9){
           return 1;
       }
       int d=0;
       return check(n,d);
    }
};


//{ Driver Code Starts.

int main() {
    int T;

    // taking testcases
    cin >> T;
    while (T--) {
        int n;

        // taking number n
        cin >> n;

        // calling countDigits
        Solution obj;
        cout << obj.countDigits(n) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends