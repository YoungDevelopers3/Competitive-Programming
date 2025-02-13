//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


int* game_with_number(int arr[], int n);

int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        int *arr2;
        
        arr2 = game_with_number(arr, n);
        for(int i = 0;i < n; i++)
            cout << arr2[i] << " ";
        
        cout << endl;
        
    
cout << "~" << "\n";
}

}

// } Driver Code Ends


int* game_with_number(int arr[], int n)
{
    
    // vector<int>result(n, 0);
    int* result = new int[n](); 
    for(int i=0;i<n-1;i++){
        int res = arr[i] ^ arr[i+1];
        result[i]=res;
    }
    result[n-1] = arr[n-1];
    
    return result;
    
    
}
