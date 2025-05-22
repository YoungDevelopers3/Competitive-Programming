class Solution {
  public:
    typedef long long int ll;

    long long int minValue(vector<int> &arr1, vector<int> &arr2) {
        // code here
        sort(arr1.begin(),arr1.end());
        reverse(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        int n=arr1.size();
        long long int sum=0;
        
        for(int i=0;i<n;i++){
            sum=sum+(arr1[i]*arr2[i]);
        }
        
        return sum;
        
        
        
        
        
    }
};