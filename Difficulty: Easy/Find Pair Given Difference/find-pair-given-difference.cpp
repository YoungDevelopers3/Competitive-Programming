//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends


class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
          
         sort(arr.begin(), arr.end());
         int low = 0, high = 1;
         int n = arr.size();
         
         while(low<n && high<n){
             int diff=arr[high]-arr[low];
             
             if(diff==x && low!=high){
                 return true;
             }
             else if(diff<x){
                 high++;
                 
             }
             else{
                 low++;
             }
             
         }
         return false;

    
      
        
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    scanf("%d ", &t);

    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int k;
        scanf("%d ", &k);
        Solution obj;

        cout << (obj.findPair(arr, k) ? "true" : "false") << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends