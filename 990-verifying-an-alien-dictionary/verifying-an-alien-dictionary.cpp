class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        //creating an index for alien order
        unordered_map<char,int>alien_order;
        for(int i=0;i<order.size();i++){
            alien_order[order[i]]=i;
        }
           
        for(int i=1;i<words.size();i++){
            string word1=words[i-1];
            string word2=words[i];
           
               bool flag=false;
            for(int j=0;j<min(word1.size(),word2.size());j++){
                char c1=word1[j];
                char c2=word2[j];
                if(alien_order[c1]<alien_order[c2]){
                    flag=true;
                    break;
                }
                else if(alien_order[c1] >alien_order[c2]){
                    return false;
                }
            } 

            if(!flag && (word1.size()>word2.size())){
                return false;
            }


        }
        return true;


    }
};