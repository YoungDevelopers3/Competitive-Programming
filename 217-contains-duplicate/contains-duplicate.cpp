class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         unordered_map<int ,int>frequency;
    for(int num:nums){
        frequency[num]++;
    }
    bool same=false;
    for(auto it:frequency){
        if(it.second>1){
            same=true;
            break;
        }
        
    }
    if(same==true){
        return true;
    }
    else{
        return false;
    }
    }
};