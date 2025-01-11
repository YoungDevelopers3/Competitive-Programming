class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int>unique_candy;
        for(int candy:candyType){
            unique_candy.insert(candy);
        }
        int doc_size=candyType.size()/2;
        int n=unique_candy.size();
        if(doc_size>=n){
            return n;
        }
        else{
            return doc_size;
        }
    }
};