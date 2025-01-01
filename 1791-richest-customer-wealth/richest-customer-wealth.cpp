class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> result;
        for(vector <int>cx:accounts){
               int s=0;
            for(int x:cx){
               
                s=s+x;
                result.push_back(s);
            }
        }
        sort(result.rbegin(),result.rend());
        return result[0];
    }
};