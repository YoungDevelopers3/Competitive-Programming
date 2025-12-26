// User function template for C++
class Solution {
  public:
    int search(string &pat, string &txt) {
        int k=pat.size();
        int n=txt.size();
        if(k>n){
            return 0;
        }
        unordered_map<char,int>freq;
        int i=0,j=0;
        for(char ch:pat){
            freq[ch]++;
        }
        int count =freq.size();
        int ans=0;
        while(j<n){
            if(freq.find(txt[j])!=freq.end()){
                freq[txt[j]]--;
               if( freq[txt[j]]==0){
                   count--;
               }   
            }
            if(j-i+1<k){
                j++;
            }
            else{
                if(count==0){
                  ans++;  
                }
            
                    if(freq.find(txt[i])!=freq.end()){
                        freq[txt[i]]++;
                        if(freq[txt[i]]==1){
                            count++;
                        }
                    }
                    i++;
                    j++;
                
            }
        }
        return ans;
        
        
    }
};