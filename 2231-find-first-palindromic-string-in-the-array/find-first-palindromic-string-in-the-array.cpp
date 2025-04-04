class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string word:words){
            string rev=word;
            reverse(word.begin(),word.end());
            if(rev==word){
                return word;
            }
        }
        return "";
    }
};