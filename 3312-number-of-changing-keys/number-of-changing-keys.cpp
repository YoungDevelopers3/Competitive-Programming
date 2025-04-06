class Solution {
public:
    int countKeyChanges(string s) {
        int counter=0;
        string temp="";
        for(char ch:s){
            if(ch>='A' && ch<='Z'){
                ch=ch+32;
            }
            temp=temp+ch;
        }
        for(int i=1;i<temp.size();i++){
            if(temp[i-1]!=temp[i]){
                counter++;
            }
        }
        return counter;
    }
};