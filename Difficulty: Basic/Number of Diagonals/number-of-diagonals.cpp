//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	long long diagonals(int n)
	{
       long long num=n;
       long long res=(num*(num-3))/2;
       return res;
     
	}
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

	   

	    Solution ob;
	    cout << ob.diagonals(n) << "\n";
   
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends