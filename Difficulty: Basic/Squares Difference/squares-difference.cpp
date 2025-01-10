//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    long long int squaresDiff(int N){
        long long int square_of_sum=0;
        long long int sum=0;
        for(long long int i=1;i<=N;i++){
            sum=sum+i;
        }
        square_of_sum=sum*sum;
        long long int sum_of_squares=0;
        for(long long int i=0;i<=N;i++){
            sum_of_squares=sum_of_squares+(i*i);
        }
        return abs(sum_of_squares-square_of_sum);
        
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
        cout << ob.squaresDiff(N) << endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends