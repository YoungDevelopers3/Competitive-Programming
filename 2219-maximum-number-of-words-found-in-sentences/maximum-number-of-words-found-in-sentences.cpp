class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        vector<int>freq;
        for(string word:sentences){
            int c=0;
            for(char ch:word){
                if(ch==' '){
                    c++;
                }
                freq.push_back(c);
            }
        }
        sort(freq.rbegin(),freq.rend());
        int mx=0;
        mx=freq[0]+1;
        return mx;
    }
};