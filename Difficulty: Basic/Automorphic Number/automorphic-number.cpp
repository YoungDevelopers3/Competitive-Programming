//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
		string is_AutomorphicNumber(int n)
		{
		    int sq_n=n*n;
		    int d1=sq_n%10;
		    int d2=n%10;
		    
		    if(d1==d2){
		        return "Automorphic";
		    }
		    else{
		        return "Not Automorphic";
		    }
		    
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_AutomorphicNumber(n);
    	cout << ans <<"\n";
    
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends