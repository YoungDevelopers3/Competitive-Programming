class Solution {
public:
    string reverseVowels(string s) {    
       vector<char>temp;
    for(char ch:s){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='I'||ch=='O'||ch=='U'||ch=='E'){
            temp.push_back(ch);
        }
    }
    
    reverse(temp.begin(),temp.end());
    int j=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            s[i]=temp[j];
            j++;
        }
    }
    
    return s;

    }
};
