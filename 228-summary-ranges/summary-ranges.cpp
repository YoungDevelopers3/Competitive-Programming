class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
    if (nums.empty()) return {};
    vector<string>ans;
    if(nums.size()==1){
        ans.push_back(to_string(nums[0]));
        return ans;
    }
    int j=1;
    string start=to_string(nums[0]);
    string end="";
    int interval=0;
    for(int i=0;i<nums.size();i++){
        string str="";
         if(j<nums.size() &&  nums[i]+1==nums[j]){
            j++;
         }
         else{
            end=to_string(nums[i]);
            if(start==end){
                str=end;
                
            }
            else{
                str=start+"->"+end;
            }
            
            ans.push_back(str);
            if(i<nums.size()-1){
                start=to_string(nums[i+1]);
                end="";
            
                j++;
            }
            else{
                break;
            }
            
            
            
         }
    }
     return ans;


    }
};