//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
  public:   
    int countCamelCase (string s)
    {
    	int counter=0;
    	for(char ch:s){
    	    if(ch>='A' && ch<='Z'){
    	        counter++;
    	    }
    	}
    	return counter;
    }
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout <<ob.countCamelCase (s) << '\n';
	
cout << "~" << "\n";
}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends