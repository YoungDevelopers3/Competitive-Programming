class Solution {
  public:
    string encode(vector<string>& s) {
        string st="";
        for(string ch:s){
            st=st+to_string(ch.size())+"#"+ch;
        }
        return st;
        
    }

    vector<string> decode(string& s) {
        int i=0;
        vector<string>res;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            j++;
            res.push_back(s.substr(j,len));
            i=j+len;
        }
        return res;
        // code here
    }
};