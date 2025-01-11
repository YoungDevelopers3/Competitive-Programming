class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>freq_mag;
        for(char ch:magazine){
            freq_mag[ch]++;
        }
        unordered_map<char,int>freq_rans;
        for(char ch:ransomNote){
            freq_rans[ch]++;
        }
         bool flag=false;
        for(int i=0;i<ransomNote.size();i++){
            if(freq_mag[ransomNote[i]]>0 && freq_rans[ransomNote[i]]<=freq_mag[ransomNote[i]]){
                flag=true;
            }
            else{
               return false;
            }
        }
        return flag;
        
        

    }
};