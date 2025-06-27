class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int counter=0;
        unordered_map<char,int>freq;
        for(char ch:jewels){
            freq[ch]++;
        }
        for(char ch :stones){
            if(freq[ch]>=1){
                counter++;
            }
        }
        return counter;
    }
};