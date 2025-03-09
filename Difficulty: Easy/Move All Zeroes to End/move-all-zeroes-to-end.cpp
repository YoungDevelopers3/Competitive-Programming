//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        unordered_map<int,int>freq;
        vector<int>temp;
        for(int i:arr){
            if(i!=0){
               temp.push_back(i); 
            }
            else{
                freq[i]++;
            }
        }
        int n=freq[0];
        while(n>0){
            temp.push_back(0);
            n--;
        }
        arr=temp;
        
    
        
        
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
        Solution ob;
        int n = arr.size();
        ob.pushZerosToEnd(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends