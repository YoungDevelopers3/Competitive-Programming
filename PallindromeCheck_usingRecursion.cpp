class Solution {
  public:
    bool PalindromeChecker(int l,int r,string &s){
       
        if(l>=r){
            return true;
        }
        if(s[l]!=s[r]){
            return false;
        }
       
        return PalindromeChecker(l+1,r-1,s);
        /* Here we have used the approach of l+1 and r-1 instead of l++ and r-- because
        because in a post fix increment in the very first instance of accessing the varable
       the value is used and in the second instance the value is updated. In this code there is no 
       instance where we can access the varibles l and r to  update  them , so the same values of l and r are being used 
       hence it will cause TLE , So the best way would be to either l+1, r-1 or ++l ,--r so that values are updated
       before even they are used */
        
    }
  
  
  
    bool isPalindrome(int n) {
      
      string s=to_string(n);
      return PalindromeChecker(0,s.size()-1,s);
      
      
      
    }
};
