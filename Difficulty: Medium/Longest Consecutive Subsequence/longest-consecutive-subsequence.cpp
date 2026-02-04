class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        if(arr.size()==0 || arr.size()==1){
            return arr.size();
        }
        sort(arr.begin(),arr.end());
        int len=0,temp=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1]==1){
                temp++;
            }
            else if(arr[i-1]==arr[i]){
                continue;
            }
            else{
                len=max(len,temp);
                temp=1;
            }
        }
        len=max(len,temp);
        return len;
        
    }
};