//{ Driver Code Starts
//Initial Template for C++


#include <iostream>
using namespace std;


// } Driver Code Ends

//User function Template for C++

class Solution{
  public:
    //Complete this function
    int check(int n ,int sum){
        int num=n;
        while(num>0){
            int d=num%10;
            sum=sum+d;
            num=num/10;
        }
        if(sum>=10){
            n=sum;
            sum=0;
          return check(n,sum);
        }
        return sum;

    }
    
    
    
    
    int digitalRoot(int n)
    {
        if(n<10){
            return n;
        }
        int sum=0;
        return check(n,sum);
    }
};


//{ Driver Code Starts.


int main() {
	int T;
	cin>>T;//taking testcases
	while(T--)
	{
	    int n;
	    cin>>n;//taking number n
	    
	    //calling digitalRoot() function
	    Solution obj;
	    cout<<obj.digitalRoot(n)<<endl;
	    
	    
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends