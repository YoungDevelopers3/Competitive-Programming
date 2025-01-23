class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        //Frequency of each word in licensePlate
        unordered_map<char,int>freq_licensePlate;
        for(char ch:licensePlate){
            if(isalpha(ch)){
                freq_licensePlate[tolower(ch)]++;
            }
        }
        string shortest_word="";
        for(string word:words){
            unordered_map<char,int>freq_word;
            bool flag=true;
            for(char ch:word){
                freq_word[ch]++;
            }

            for(auto p:freq_licensePlate){
                    char c=p.first;
                    int b=p.second;
                    if(freq_word[c]<b){
                        flag=false;
                        break;
                    }
            }
            
            if(flag && (shortest_word.empty() || word.size()<shortest_word.size())){
                shortest_word=word;
            }
        }
        return shortest_word;
        
    }
};