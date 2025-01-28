//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int sumOfDigits(int n) {
       int num=n;
       int sum=0;
       while(num>0){
           int d=num%10;
           sum=sum+d;
           num=num/10;
       }
       return sum;
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
        cout << ob.sumOfDigits(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends