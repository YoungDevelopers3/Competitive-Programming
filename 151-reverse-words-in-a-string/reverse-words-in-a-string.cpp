class Solution {
public:
    string reverseWords(string s) {
       
        vector<string>temp;
        stringstream ss(s);
       
        while(ss>>s){
            temp.push_back(s);
        }
        reverse(temp.begin(),temp.end());
        string res="";
        for(string ch:temp){
            res=res+ch+" ";
        }
        int n=res.size()-1;
       return res.substr(0,n);
    }
};