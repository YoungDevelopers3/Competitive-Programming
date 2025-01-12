class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string s3=s1+" "+s2;
stringstream ss(s3);
string str="";
vector<string>v;
while(ss >> str){
v.push_back(str);
}
unordered_map<string,int>freq;
for(string i:v){
    freq[i]++;
}
vector<string>result;
for(auto pair:freq){
    string key=pair.first;
    int value=pair.second;
    if(value==1){
        result.push_back(key);
    }
}

return result;

    }
};