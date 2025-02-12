//{ Driver Code Starts
//Initial Template for C++

// C++ program to check if n is sparse or not
#include<iostream>
using namespace std;

// } Driver Code Ends
//User function Template for C++
#include<bits/stdc++.h>
class Solution
{
    public:
    //Function to check if the number is sparse or not.
    
    string toBinary(int n){
        string res="";
        while(n>0){
            res+=(n%2==0) ? '0':'1';
            n=n/2;
        }
        
        reverse(res.begin(),res.end());
        return res;
    }
    
    
    bool isSparse(int n)
    {
      string bin=toBinary(n);
    //   cout<<bin.length()<<"\n";
      bool b=1;
      for(int i=0;i<bin.size();i++){
        //   cout<<i<<" "<<bin[i]<<"\n";
          if(i!=0 and bin[i]=='1' && bin[i-1]=='1'){
             b=0; 
            //  cout<<"in if loop "<<b<<"\n";
          }
      }
      return b;
      
      
      
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{
    int t,n;
    
    //testcases
    cin>>t;
    while(t--)
    {
        //initializing n
        cin>>n;
        
        //printing 1 if isSparse() returns true
        //else 0
        Solution ob;
        if(ob.isSparse(n)){
            cout << "1" << endl;
        }
        else cout << "0" << endl;
        
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends