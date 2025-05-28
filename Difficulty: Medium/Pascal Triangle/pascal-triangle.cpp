
class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
       vector<int>ans;
       long long int temp=1;
       ans.push_back(temp);
       for(int i=1;i<n;i++){
          temp=temp*(n-i);
          temp=temp/i;
          ans.push_back(temp);
       }
       return ans;
       
        
    }
};
