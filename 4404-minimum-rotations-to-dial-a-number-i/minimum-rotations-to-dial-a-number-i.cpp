class Solution {
public:
    int minRotations(string s) {
        vector<char>nums={'0','1','2','3','4','5','6','7','8','9'};
        unordered_map<char,int>indexes;
        for(int i=0;i<10;i++){
            indexes[nums[i]]=i;
        }
        int sum=0;
        int first=abs(indexes[nums[0]]-indexes[s[0]]);
        sum=min(first,10-first);
        for(int i=0;i<9;i++){
            int d=abs(indexes[s[i]]-indexes[s[i+1]]);
            sum+=min(d,10-d);
        }
        return sum;
    }
};