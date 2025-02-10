//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string uncommonChars(string& s1, string& s2) {
        unordered_map<char,int>freq1;
        unordered_map<char,int>freq2;
        set<char>result;
        string res="";
        
        for(char ch:s1){
            freq1[ch]++;
        }
        
        for(char ch:s2){
            freq2[ch]++;
        }
        
        for(char ch:s1){ // freq1 map iterate
            if(freq2[ch]<1){
                result.insert(ch);
            }
        }
        
        for(char ch:s2){ // freq 2 
            if(freq1[ch]<1){
                result.insert(ch);
            }
        }
        
        for(char ch:result){
            res=res+ch;
        }
        return res;
        
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A;
        cin >> B;
        Solution ob;
        cout << ob.uncommonChars(A, B);
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends