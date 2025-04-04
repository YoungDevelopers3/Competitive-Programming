class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>freq;
        for(char ch:s){
            freq[ch]++;
        }
        for(char ch:s){
            if(freq[ch]==1){
                int index=s.find(ch);
                return index;
            }
        }
        return -1;
    }
};