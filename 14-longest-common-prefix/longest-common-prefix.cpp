class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first=strs[0];
        int n=strs.size();
        string last=strs[n-1];
        int x=INT_MAX;
        for(string s:strs){
            int n=s.size();
            x=min(x,n);
        }
      string result="";
        for(int i=0;i<x;i++){
             if(first[i]==last[i]){
                result=result+first[i];
             }
             else{
                break;
             }
        }
        return result;
    }
};