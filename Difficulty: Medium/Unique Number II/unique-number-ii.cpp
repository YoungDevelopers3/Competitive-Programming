class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        // Code here.
                 int result=0;
                for(int i:arr){
                    result=result^i;
                }
                int a =0;
                int b=0;
              int diff=result & (-(unsigned int )result);
                for(int n:arr){
                    if(n & diff){
                        a=a^n;
                    }
                    else{
                        b=b^n;
                    }
                }
                vector<int>ans;
                ans.push_back(a);
                ans.push_back(b);
                sort(ans.begin(),ans.end());
                return ans;
    }
};