class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1;
        stack<char>st2;
        for(char ch:s){
            if(ch=='#' && !st1.empty()){
                st1.pop();
            }
            if(ch!='#'){
                st1.push(ch);
            }
        }

        for(char ch:t){
            if(ch=='#' && !st2.empty()){
                st2.pop();
            }
            if(ch!='#'){
                st2.push(ch);
            }
        }
        if(st1==st2){
            return true;
        }
        else{
            return false;
        }



    }
};