class Solution {
  public:
    int totalElements(vector<int> &arr) {
        int n=arr.size();
        unordered_map<int,int>freq;
        int left=0,right=0,max_len=INT_MIN;
        
        while(right<n){
            freq[arr[right]]++;
            while(freq.size()>2){
                freq[arr[left]]--;
                if(freq[arr[left]]==0){
                    freq.erase(arr[left]);
                }
                left++;
            }
            max_len=max(max_len,right-left+1);
            right++;
        }
        return max_len;
        
    }
};