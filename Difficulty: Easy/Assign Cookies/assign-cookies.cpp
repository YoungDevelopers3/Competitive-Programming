class Solution {
  public:
    int maxChildren(vector<int> &greed, vector<int> &cookie) {
    sort(greed.begin(),greed.end());
    sort(cookie.begin(),cookie.end());
     int g=0,c=0,counter=0;
     while(g<greed.size() && c<cookie.size()){
         if(cookie[c]>=greed[g]){
             counter++;
             g++;
             c++;
             
         }
         else{
             c++;
         }
     }
     return counter;
     
     
     
        
    }
};