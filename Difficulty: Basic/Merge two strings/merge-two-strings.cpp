//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    
cout << "~" << "\n";
}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



string merge (string S1, string S2)
{
    int n1=S1.size();
    int n2=S2.size();
    string res="";
    int p1=0,p2=0;
    while(p1<n1 && p2<n2){
        res=res+S1[p1]+S2[p2];
        p1++;
        p2++;
    }
    
    while(p1<n1){
        res=res+S1[p1];
        p1++;
    }
    while(p2<n2){
        res=res+S2[p2];
        p2++;
    }
    
    return res;
    
    
    
    
    
    
}