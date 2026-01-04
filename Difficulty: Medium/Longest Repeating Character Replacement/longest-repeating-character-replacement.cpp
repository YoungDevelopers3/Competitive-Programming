class Solution {
  public:
    int characterReplacement(string& s, int k) {
       
       int left=0,right=0,n=s.length(),max_f=INT_MIN,max_l=INT_MIN;
        unordered_map<char,int>freq;
        for(right=0;right<n;right++){
             freq[s[right]]++;
             max_f=max(max_f,freq[s[right]]);

             while((right-left+1)-max_f>k){
                freq[s[left]]--;
                left++;
             }
             max_l=max(max_l,right-left+1);
        }
        return max_l;
       
       
       
       
       
       
        
    }
};