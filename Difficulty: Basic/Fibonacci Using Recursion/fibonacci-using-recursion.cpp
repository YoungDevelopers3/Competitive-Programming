//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int check(int n){
       if(n==0){
           return 0;
       }
       if(n==1){
           return 1; 
       }
      return check(n-1)+check(n-2);
    }
    int fibonacci(int n)
    {
       return check(n);
    }
};

//{ Driver Code Starts.
int main() {
	int T;
	
	//taking total testcases
	cin>>T;
	while (T--)
	{
	    int n;
	    //taking number n
	    cin>>n;
	    Solution ob;
	    //calling fibonacci() function
	    cout<<ob.fibonacci(n)<<endl;
	    
	    
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends