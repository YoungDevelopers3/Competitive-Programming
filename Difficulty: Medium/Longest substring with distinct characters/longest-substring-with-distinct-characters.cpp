class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        int n=s.length();
        if(n<=1){
            return n;
        }
        
        int bubli=0,bunty=0;
        vector<bool>police(256,false);
        int maxl=INT_MIN;
        while(bunty<n){
            while(police[s[bunty]]){
                police[s[bubli]]=false;
                bubli++;
            }
            police[s[bunty]]=true;
            maxl=max(maxl,bunty-bubli+1);
            bunty++;
            
        }
        return maxl;
        
        
    }
};
