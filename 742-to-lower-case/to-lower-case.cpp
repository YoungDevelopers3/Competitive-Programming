class Solution {
public:
    string toLowerCase(string s) {
        string temp="";
        for(char ch :s){
            if(ch>='A' && ch<='Z'){
                ch=ch+32;
                
            }
            temp=temp+ch;
        }
        s=temp;
        return s;
    }
};