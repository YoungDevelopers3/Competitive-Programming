//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
    bool isPossible(vector<int>stalls,int cows,int dist){
        int current_cows=1;
        int prev_dist=stalls[0];
        
        for(int i=1;i<stalls.size();i++){
            if(stalls[i]-prev_dist>=dist){
                prev_dist=stalls[i];
                current_cows++;
            }
            
        }
        
        if(current_cows>=cows){
            return true;
        }
        else{
          return  false;
        }
        
    }
  
  
  
    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(),stalls.end());
          int low=1;
          int high=stalls.back()-stalls.front();
          int ans=0;
          while(low<=high){
              int mid=low+(high-low)/2;
              
              if(isPossible(stalls,k,mid)){
                  ans=mid;
                  low=mid+1;
              }
              else{
                  high=mid-1;
              }
              
              
          }
          return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends