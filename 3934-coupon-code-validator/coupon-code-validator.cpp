class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
         int n=code.size();
        vector<string>ans,electronics,grocery,pharmacy,restaurant;
        for(int i=0;i<n;i++){
            if((businessLine[i]=="electronics"||businessLine[i]=="grocery"||businessLine[i]=="pharmacy"||businessLine[i]=="restaurant")&&(isActive[i]==true)){
                       string t=code[i];
                       string temp="";
                       if(t!=""){
                           for(char j:t){
                           if(isalnum(j)||j=='_'){
                               temp=temp+j;
                           }
                           
                        }
                        if(temp==t){
                           if(businessLine[i]=="electronics"){
                            electronics.push_back(code[i]);
                           }
                           else if(businessLine[i]=="grocery"){
                            grocery.push_back(code[i]);
                           }
                           else if(businessLine[i]=="pharmacy"){
                            pharmacy.push_back(code[i]);
                           }
                           else if(businessLine[i]=="restaurant"){
                            restaurant.push_back(code[i]);
                           }
                        }
                           
                    }
                
            }
                

        }

        sort(electronics.begin(),electronics.end());
                sort(grocery.begin(),grocery.end());
                sort(pharmacy.begin(),pharmacy.end());
                sort(restaurant.begin(),restaurant.end());

                ans.insert(ans.end(),electronics.begin(),electronics.end());
                ans.insert(ans.end(),grocery.begin(),grocery.end());
                ans.insert(ans.end(),pharmacy.begin(),pharmacy.end());
                ans.insert(ans.end(),restaurant.begin(),restaurant.end());
                return ans;
        

        
    }
};