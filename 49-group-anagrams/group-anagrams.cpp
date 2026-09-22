class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>freq;
        vector<vector<string>>ans;
        for(auto i:strs){
            string key=i;
            sort(key.begin(),key.end());
            freq[key].push_back(i);

        }
        for(auto i:freq){
            ans.push_back(i.second);
        }
        return ans;
    }
};