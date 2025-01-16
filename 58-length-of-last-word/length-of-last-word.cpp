class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        vector<string>words;
        while(ss>>s){
            words.push_back(s);
        }
        int n=words.size()-1;
        string temp=words[n];
        return temp.size();
    }
};