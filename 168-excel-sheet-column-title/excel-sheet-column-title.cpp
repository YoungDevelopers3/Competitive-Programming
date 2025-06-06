class Solution {
public:
    string convertToTitle(int columnNumber) {
        string str="";
        while(columnNumber>0){
           columnNumber--;
           char ch=(columnNumber%26)+'A';
           str=str+ch;
           columnNumber=columnNumber/26;
            
        }
        reverse(str.begin(),str.end());
        return str;

    }
};