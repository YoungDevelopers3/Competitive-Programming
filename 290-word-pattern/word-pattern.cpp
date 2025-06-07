class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        stringstream ss(s);
        string word="";
        vector<string>words;
        vector<char>letters;
        while(ss>>word){
            words.push_back(word);
        }
        for(char ch:pattern){
            letters.push_back(ch);
        }
        if(letters.size()!=words.size()){
            return false;
        }
        unordered_map<char,string>freq1;
        unordered_map<string,char>freq2;
       
       for(int i=0;i<letters.size();i++){
            string w=words[i];
            char l=letters[i];
            if(freq1.count(l) && freq1[l]!=w){
                 return false;
            }
            else{
                freq1[l]=w;
            }
            if(freq2.count(w) && freq2[w]!=l){
                return false;
            }
            else{
                freq2[w]=l;
            }
       }
       return true;
        

    }
};