class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string word:words){
            int n=word.size();
            string str="";
            string temp=word;
           reverse(temp.begin(),temp.end());
           if(temp==word){
            return word;
           }
        //    else{
        //     return str;
        //    }

        }

        return "";
    }
};