//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        vector<int>positive;
        vector<int>negative;
        int n=arr.size();
        int p=0;
        int ng=0;
        for(int i:arr){
            if(i>=0){
                positive.push_back(i);
            }
            else{
                negative.push_back(i);
            }
        }
        
        arr.clear();
        for(int i=0;i<n;i++){
            if(i%2!=0 && ng<negative.size()){
                arr.push_back(negative[ng]);
                ng++;
            }
            else{
                if(p<positive.size()){
                   arr.push_back(positive[p]);
                   p++; 
                }
            }
        }
        
        while(p<positive.size()){
            arr.push_back(positive[p]);
            p++;
        }
        while(ng<negative.size()){
            arr.push_back(negative[ng]);
            ng++;
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
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends