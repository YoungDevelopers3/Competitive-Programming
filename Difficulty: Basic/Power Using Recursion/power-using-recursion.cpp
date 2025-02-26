//{ Driver Code Starts
//Initial Template for C++


#include <iostream>
using namespace std;


// } Driver Code Ends

//User function Template for C++

class Solution{
  public:
    
    int check(int n,int p){
        int ans=1;
        if(p==0){
            return 1;
        }
        return n*check(n,p-1);
    }
    
    int RecursivePower(int n,int p)
    {
       return check(n,p);
    }
};



//{ Driver Code Starts.


int main() {
	int T;
	cin>>T;//testcases
	while(T--)
	{
	    int n,p;
	    
	    //taking n and p as inputs
	    cin>>n>>p;
	    
	    //calling RecursivePower() function
	    Solution obj;
	    cout<<obj.RecursivePower(n,p)<<endl;
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends