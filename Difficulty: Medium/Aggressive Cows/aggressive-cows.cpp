//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
  
  
   bool isPossible(vector<int>stall,int cows,int minidist){
     int counter=1;
     int prevcow=stall[0];
     for(int i=1;i<stall.size();i++){
         if(stall[i]-prevcow>=minidist){
             prevcow=stall[i];
             counter++;
         }
     }
     
     if(counter>=cows){
         return true;
     }
     else{
         return false;
     }
       
   }
  
 
    int aggressiveCows(vector<int> &stalls, int k) {
         sort(stalls.begin(),stalls.end());
         int low=1;
         int result=0;
         int high=stalls.back()-stalls.front();
         while(low<=high){
             int mid=low+(high-low)/2;
             if(isPossible(stalls,k,mid)){
                 result=mid;
                 low=mid+1;
             }
             else{
                 high=mid-1;
             }
             
         }
         return result;
        
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