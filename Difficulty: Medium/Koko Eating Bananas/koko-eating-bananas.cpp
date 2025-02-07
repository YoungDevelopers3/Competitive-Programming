//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isPossible(vector<int>arr,int k,int min_ban){
    int total_hours=0;
    for(int pile:arr){
        total_hours=total_hours+ceil((double)(pile)/(double)(min_ban));
    }
    
    if(total_hours<=k){
        return true;
    }
    else{
        return false;
    }
        
        
    }
    
    int kokoEat(vector<int>& arr, int k) {
    sort(arr.begin(),arr.end());
    int n=arr.size();
    int low=1;
    int high=arr[n-1];
    int ans=0;
        while(low<=high){
        int mid=low+(high-low)/2;
    
        if(isPossible(arr,k,mid)){ 
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    
      }
      return ans;
    
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;

        cout << ob.kokoEat(arr, k);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends