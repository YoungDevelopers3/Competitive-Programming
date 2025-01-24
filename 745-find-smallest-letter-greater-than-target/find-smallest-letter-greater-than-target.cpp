class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low=0;
        int high=letters.size()-1;
        int result=0;
        while(low<=high){
          int mid=low+(high-low)/2;
          if(letters[mid]==target){
            low=mid+1;
          }
          else if(letters[mid]>target){
            result=mid;
            high=mid-1;
          }
          else{
            low=mid+1;
          }
                          
        }
        if(letters[result]>target){
            return letters[result];
        }
        else{
            return letters[0];
        }
    }
};