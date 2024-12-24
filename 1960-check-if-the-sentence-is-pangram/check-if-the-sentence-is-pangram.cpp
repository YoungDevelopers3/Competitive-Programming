class Solution {
public:
    bool checkIfPangram(string sentence) {


       set<char>alpha;
for(char ch:sentence){
    alpha.insert(ch);
}
if(alpha.size()==26){
    return true;
}
else{
    return false;
}





        
    }
};