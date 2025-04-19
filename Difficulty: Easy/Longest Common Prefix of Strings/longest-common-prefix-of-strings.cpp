//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        sort(arr.begin(),arr.end());
         string str_small="";
         string str_large="";
         string result="";
         int n=arr.size();
       
             str_small=arr[0];
             str_large=arr[n-1];
      
         
         
         for(int i=0;i<str_small.size();i++){
             
             if(str_small[i]==str_large[i]){
                 result=result+str_small[i];
             }
             else{
                 break;
             }
             
         }
         return result;
    }
      
        
        
        
       
        
        
        
    
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        string ans = ob.longestCommonPrefix(arr);
        if (ans.empty())
            cout << "\"\"";
        else
            cout << ans;
        cout << endl;
    }
}

// } Driver Code Ends