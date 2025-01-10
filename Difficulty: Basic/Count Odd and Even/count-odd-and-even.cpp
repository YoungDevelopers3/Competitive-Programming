//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    /*Function to count even and odd elements in the array
     * arr : Array with its elements
     */
    pair<int, int> countOddEven(vector<int> &arr) {
        int e=0,o=0;
        for(int num:arr){
            if(num%2==0){
                e++;
            }
            else{
                o++;
            }
        }
        pair<int,int>p;
        p.first=o;
        p.second=e;
        return p;
        
    }
};

//{ Driver Code Starts.
int main() {

    // Testcase input
    int testcase;
    cin >> testcase;
    cin.ignore();

    while (testcase--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;

        pair<int, int> res = ob.countOddEven(arr);
        cout << res.first << " " << res.second << " ";
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends