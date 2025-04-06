class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        for(int i=0;i<words.size();i++){
            string str=words[i];
            int index=str.find(x);
            if(index!=string::npos){
                ans.push_back(i);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};