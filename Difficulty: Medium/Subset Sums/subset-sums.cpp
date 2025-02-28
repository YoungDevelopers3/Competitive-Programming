//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
    void check(int index,vector<int>& arr,int sum,vector<int>& sums,int N){
        
      if(index==N){
          sums.push_back(sum);
          return;
      }
      
      //Including the element
      check(index+1,arr,sum+arr[index],sums,N);
      
      //Excluding the element
      check(index+1,arr,sum,sums,N);  

    }
  
    vector<int> subsetSums(vector<int>& arr) {
       int N=arr.size();
       vector<int>sums;
       int sum=0;
       int index=0;
       check(index,arr,sum,sums,N);
       sort(sums.begin(),sums.end());
       return sums;
    }
};


//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after the integer input

    while (t--) {
        vector<int> inputArray;
        string inputLine;

        // Input format: first number n followed by the array elements
        getline(cin, inputLine);
        stringstream inputStream(inputLine);
        int num;
        while (inputStream >> num) {
            inputArray.push_back(num); // Read the array elements from input string
        }

        Solution solutionObject;
        vector<int> result = solutionObject.subsetSums(inputArray);
        sort(result.begin(), result.end());

        for (int i = 0; i < result.size(); i++) {
            if (i != 0)
                cout << " ";
            cout << result[i];
        }
        cout
            << endl
            << "~\n"; // Print results in list format with new line after each test case
    }

    return 0;
}

// } Driver Code Ends