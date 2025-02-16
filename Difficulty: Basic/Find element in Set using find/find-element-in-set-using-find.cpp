//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// Complete this function

bool sExists(set<int> s, int x) {
   vector<int>res;
   for(int i:s){
       res.push_back(i);
   }
   auto it=find(res.begin(),res.end(),x);
   
   if(it!=res.end()){
       return true;
   }
   else{
       return false;
   }
   
   
   
   
   
   
   
   
}

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        set<int> s;
        string line, line2;
        getline(cin, line);
        getline(cin, line2);
        stringstream ss(line);
        stringstream ss1(line2);
        int num, x;
        while (ss >> num) {
            s.insert(num);
        }
        while (ss1 >> num) {
            x = num;
        }

        if (sExists(s, x))
            cout << "true\n";
        else
            cout << "false\n";
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends