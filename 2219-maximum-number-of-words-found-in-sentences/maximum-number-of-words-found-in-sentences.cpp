class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        vector<int>v;
        for(string str:sentences){
            stringstream ss(str);
           string word="";
            int words=0;
            while(ss>>word){
                words++;
            }
            v.push_back(words);

        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        return v[0];
    }
};