//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:    
    int setBitCount(int n) {
        int res=__builtin_popcount(n);
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        Solution ob;
        
        cout <<ob.setBitCount(n) << endl;
    
cout << "~" << "\n";
}
}



// } Driver Code Ends