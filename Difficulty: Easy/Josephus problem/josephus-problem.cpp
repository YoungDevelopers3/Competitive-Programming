//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution {
  public:
  
    int check(vector<int>& persons,int k,int index){
     int n=persons.size();
    if(n==1){
        return persons[0];
    }
    //k=k-1;
    index=(index+k)%n;
    //cout<<"Kida !"<<index<<endl;
    persons.erase(persons.begin()+index);
    // for(int i:persons){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    return check(persons,k,index);
    
}

  
    int josephus(int n, int k) {
       
       int index=0;
       vector<int>persons;
       for(int i=1;i<=n;i++){
           persons.push_back(i);
       }
       k=k-1;
       return check(persons,k,index);
       
       
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t; // testcases
    while (t--) {
        int n, k;
        cin >> n >> k; // taking input n and k

        // calling josephus() function
        Solution ob;
        cout << ob.josephus(n, k) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends