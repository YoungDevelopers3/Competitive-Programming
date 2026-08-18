class Solution {
public:

    bool solve(string &expression,int &index){
           char c=expression[index++];
           if(c=='t'){
            return true;
           }
           if(c=='f'){
            return false;
           }
           if(c=='!'){
             index++; //skipping (
             bool ans=solve(expression,index);
             index++;//skipping )
             return !ans;
           }
           
           //after t,f,! we can get either & or |
           index++;//for skipping (
           vector<bool>values;
           values.push_back(solve(expression,index));
           while(expression[index]==','){
               index++;
               values.push_back(solve(expression,index));
           }
           index++; //skipping )

           if(c=='&'){
             for(bool i:values){
                if(i==false){
                    return false;
                }
             }
             return true;
           }
           else{//if c==|
               for(bool v:values){
                 if(v==true){
                    return true;
                 }
               }
               return false;
           }
      
          
    }

    bool parseBoolExpr(string expression) {
        int index=0;
        return solve(expression,index);
    }
};