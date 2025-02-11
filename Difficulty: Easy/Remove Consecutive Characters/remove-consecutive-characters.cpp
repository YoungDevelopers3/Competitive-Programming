//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        
        // cout<<s[0]<<"\n";
        string res="";
        // cout<<res<<"\n";
        for(int i=0;i<s.length();i++){
            if(i==0){
                res+=s[i];
                continue;
            }
            
            
            if(s[i]==s[i-1]){
                continue;
            }
            else{
                res+= s[i];
            }
            // cout<<res<<"\n";
        }
        
        // aabb
        // res = a
        
        
        // map<char, int>freq;
        
        // freq[a]=2
        // freq[b]=2
        
        // map iterate 
        // strings+= mp.first 
        
        
        
        
        // set insert 
        // ab
        // unordered 
        // ordered 
        // sorted 
        // for(int i=1;i<s.size();i++){
        //     if(s[i]==s[i-1]){
        //      char ch=s[i];
        //      s.erase(remove(s.begin(),s.end(),ch),s.end());
        //      cout<<s<<"\n";
        //     }
        // }
        // aabb
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.removeConsecutiveCharacter(s) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends