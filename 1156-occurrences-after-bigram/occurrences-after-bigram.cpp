class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string>words;
        string word="";
        stringstream ss(text);
        while(ss>>word){
            words.push_back(word);
        }
        vector<string>result;
        for(int i=1;i<words.size();i++){
            if(words[i-1]==first && words[i]==second){
                if((i+1)!=words.size()){
                     result.push_back(words[i+1]);
                }
            }
        }
        return result;
        

    }
};