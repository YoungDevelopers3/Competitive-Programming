//{ Driver Code Starts
//Initial Template for C++



#include <iostream>
using namespace std;



// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int check(int n,int sum){
     int d=n%10;
     sum=sum+d;
     n=n/10;
     if(n<=0){
         return sum;
     }
     check(n,sum);
    }
    int sumOfDigits(int n)
    {
     int sum=0;
     return check(n,sum);
    }
};

//{ Driver Code Starts.


int main() {
	int T;
	
	//taking testcases
	cin>>T;
	while(T--)
	{
	    int n;
	    
	    //taking input n
	    cin>>n;
	    
	    //calling method sumOfDigits()
	    Solution obj;
	    cout<<obj.sumOfDigits(n)<<endl;
	    
	    
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends