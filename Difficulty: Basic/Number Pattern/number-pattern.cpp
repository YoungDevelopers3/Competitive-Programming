//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<string> numberPattern(int N)
    {
        vector<string>result;
        string res="";
       for(int i=1;i<=N;i++){
           
           string tmp="";
           for(int j=1;j<=i;j++){
               tmp+= to_string(j);  // 12
           }
           for(int j=i-1;j>=1;j--){ // 1
               tmp+=to_string(j);
           }
           
           result.push_back(tmp);
        //   string temp=res;
        //   res=res+to_string(i);
        //   if(i>=2){
        //      res=res+temp; 
        //   }
        //   result.push_back(res);
       }
       return result;
       
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
       
        Solution ob;
        vector<string> res = ob.numberPattern(N);
        for(int i = 0; i < res.size(); i++){
            cout << res[i] << " ";
        }
        cout << endl;
    
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends