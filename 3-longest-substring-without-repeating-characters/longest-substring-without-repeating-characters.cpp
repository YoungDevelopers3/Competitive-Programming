class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        if(n<=1){
            return n;
        }
        int bubli=0,bunty=0;
        int maxl=INT_MIN;
        vector<bool>checker(256,false);
        while(bunty<n){
            while(checker[s[bunty]]){
                checker[s[bubli]]=false;
                bubli++;
            }
            checker[s[bunty]]=true;
            maxl=max(maxl,(bunty-bubli+1));
            bunty++;
        }
        return maxl;
    }
};