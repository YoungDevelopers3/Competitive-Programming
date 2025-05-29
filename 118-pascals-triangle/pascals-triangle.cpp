class Solution {
public:
    vector<int> generateRows(int rows){
        vector<int>ans;
        long long int temp=1;
        ans.push_back(temp);
        for(int i=1;i<rows;i++){
            temp=temp*(rows-i);
            temp=temp/i;
            ans.push_back(temp);
        }

       return ans;
    }
    
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans1;
        for(int i=1;i<=numRows;i++){
            ans1.push_back(generateRows(i));
        }
        return ans1;
    }
};