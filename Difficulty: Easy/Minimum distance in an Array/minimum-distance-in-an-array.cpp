//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minDist(vector<int>& arr, int x, int y) {
        int min_dist=INT_MAX;
        int index_x=-1;
        int index_y=-1;
        
        for(int i=0;i<arr.size();i++){
            
            if(arr[i]==x){
                index_x=i;
            }
            
            if(arr[i]==y){
                index_y=i;   
            }
            
           if(index_x!=-1 && index_y!=-1){
               min_dist=min(min_dist,abs(index_x-index_y));
           }
    
        }
        if(min_dist<arr.size()){
            return min_dist;
        }
        else{
            return -1;
        }
        
        
        
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int x, y;
        cin >> x >> y;
        cin.ignore();
        Solution obj;
        cout << obj.minDist(arr, x, y) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends