// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        vector<vector<int>>ans;
        unordered_map<int,int>freq;
        for(int i:arr){
            freq[i]++;
        }
        for(int i=0;i<arr.size();i++){
            int temp=arr[i]*-1;
            vector<int>v;
            if(arr[i]==0 && freq[arr[i]]<2){
                continue;
            }
            if(freq[temp]>=1  && freq[arr[i]]>0 && freq[temp]>0){
                v.push_back(min(temp,arr[i]));
                v.push_back(max(temp,arr[i]));
                 ans.push_back(v);
                 freq[arr[i]]--;
                 freq[temp]--;
            }
           
        }
        set<vector<int>>st(ans.begin(),ans.end());
        ans.clear();
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;
        
        
    }
};