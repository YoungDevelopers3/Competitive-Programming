class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char,int>val={{'U',5},{'D',-5},{'L',-1},{'R',1}};
        int val1=0;
        for(char ch:moves){
            val1=val1+val[ch];
        }
        if(val1==0){
            return true;
        }
        return false;

    }
};