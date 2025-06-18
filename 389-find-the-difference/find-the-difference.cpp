class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        char result=0;
        for(char ch:s){
            result^=ch;
        }
        for(char ch:t){
            result^=ch;
        }
        return result;

        
    }
};