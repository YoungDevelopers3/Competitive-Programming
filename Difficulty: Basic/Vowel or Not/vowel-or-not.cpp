//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string isVowel(char c){
       if(c=='a'|| c=='i'||c=='e'||c=='o'||c=='u'|| c=='A'||c=='E'||c=='I'||c=='U'||c=='O'){
           return "YES";           
       }
       else{
           return "NO";
       }
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        char c;
        cin >> c;
        Solution ob;
        cout << ob.isVowel(c) << endl;
    
cout << "~" << "\n";
}
    return 0; 
} 
// } Driver Code Ends