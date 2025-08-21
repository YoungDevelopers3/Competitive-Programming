
class Solution {
  public:
  
    void generate(int index,string &output,vector<int> &arr,vector<string> &ans,string mapping[]){
        if(index>=arr.size()){
            ans.push_back(output);
            return;
        }
        int digit=arr[index];
        string value=mapping[digit];
        if(value==""){
            generate(index+1,output,arr,ans,mapping);
            return;
        }
        for(int i=0;i<value.size();i++){
            
            output.push_back(value[i]);
            generate(index+1,output,arr,ans,mapping);
            output.pop_back();
        }
        
    }
  
    vector<string> possibleWords(vector<int> &arr) {
        vector<string>ans;
        if(arr.size()<=0){
            return ans;
        }
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int index=0;
        string output="";
        generate(index,output,arr,ans,mapping);
        return ans;
    }
};