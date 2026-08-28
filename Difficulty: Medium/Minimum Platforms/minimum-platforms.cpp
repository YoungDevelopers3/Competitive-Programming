class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
     sort(arr.begin(),arr.end());
     sort(dep.begin(),dep.end());
     
     int platforms=0,max_platforms=0;
     int i=0,j=0;
     
     while(i<arr.size() && j<dep.size()){
         
         if(arr[i]<=dep[j]){
             platforms++;
             max_platforms=max(max_platforms,platforms);
             i++;
         }
         else{
             platforms--;
             j++;
         }
        
     }
     
     return max_platforms;
     
    }
};
