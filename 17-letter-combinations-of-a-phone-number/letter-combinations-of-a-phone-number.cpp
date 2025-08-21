class Solution {
public:
    void generate(string &digits, int index,string &output,vector<string> &ans,string arr[]){
        if(index>=digits.size()){
            ans.push_back(output);
            return;
        }
        int digit=digits[index]-'0';
        string value=arr[digit];
        for(int i=0;i<value.size();i++){
            output.push_back(value[i]);
            generate(digits,index+1,output,ans,arr);
            output.pop_back();
        }


    }
    vector<string> letterCombinations(string digits) {
       vector<string>ans;
        int index=0;
        if(digits.size()<=0){
            return ans;
        }
       string arr[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string output="";
        
        generate(digits,index,output,ans,arr);
        return ans;
    }
};