class Solution {
public:
    int hIndex(vector<int>& citations) {
        reverse(citations.begin(),citations.end());
        int ans=0;
        for(int i=0;i<citations.size();i++){
            if(citations[i]>=i+1){
                ans=i+1;
            }
            else{
                break;
            }
        } 
        return ans;





    }
};