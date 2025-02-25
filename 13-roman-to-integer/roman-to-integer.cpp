class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>value={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int sum=0;
        for(int i=1;i<=s.size();i++){
             if(value[s[i-1]]<value[s[i]]){
                sum=sum-value[s[i-1]];
             }
             else{
                sum=sum+value[s[i-1]];
             }

        }
        return sum;
    }
};