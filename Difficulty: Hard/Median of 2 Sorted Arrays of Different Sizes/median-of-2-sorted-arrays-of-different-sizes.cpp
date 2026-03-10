class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
       for(int i=0;i<b.size();i++){
           a.push_back(b[i]);
       }
       sort(a.begin(),a.end());
       int n=a.size();
       if(n%2==0){
           return (a[n/2]+a[(n/2)-1])/2.0;
       }
       return (double)a[n/2];
       
        
    }
};