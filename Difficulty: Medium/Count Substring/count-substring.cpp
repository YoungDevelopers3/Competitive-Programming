class Solution {
  public:
    int countSubstring(string s) {
        // Code here
        
        int n=s.size(),right=0,left=0,count[3]={0,0,0},counter=0 ;
        for(right=0;right<n;right++){
             count[s[right]-'a']++;
             while(count[0]>0 && count[1]>0 && count[2]>0){
                counter=counter+(n-right);
                count[s[left]-'a']--;
                left++;
             }
        }
        return counter;
        
        
        
    }
};