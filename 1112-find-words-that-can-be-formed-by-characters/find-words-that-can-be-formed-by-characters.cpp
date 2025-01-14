class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>freq_chars;
        for(char ch:chars){
            freq_chars[ch]++;
        }
        vector<string>v;
        
        for(string word:words){
            bool flag=false;
            unordered_map<char,int>freq_words;
            for(char ch:word){
                freq_words[ch]++;
                
            }
            for(char ch:word){
                if(freq_words[ch]<=freq_chars[ch]){
                    
                    //cout<<word<<" ";
                    flag=true;
                }
                else{
                    flag=false;
                    break;
                }
            }
            if(flag==true){
                v.push_back(word);
            }
            
        }
        int sum=0;
        for(string i:v){
            //cout<<i<<" ";
            sum=i.size()+sum;
        }
        return sum;
    }
};