// User function Template for C++

class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        vector<vector<string>>ans;
        if(arr.size()==0 || arr.size()==1){
            ans.push_back(arr);
            return ans;
        }
        
        unordered_map<string,vector<string>>freq;
        for(string i:arr){
            string temp=i;
            sort(temp.begin(),temp.end());
            freq[temp].push_back(i);
        }
        
        for(auto i:freq){
            ans.push_back(i.second);
        }
        return ans;
        
        
    }
};