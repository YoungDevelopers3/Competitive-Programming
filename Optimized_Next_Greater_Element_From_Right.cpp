#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> num={1,3,4,2};
vector<int> result;
stack<int> s;
int n=num.size();
for(int i=n-1;i>=0;i--){
    while(!s.empty() && s.top()<=num[i] ){
        s.pop();
    }
    
   if(s.empty()){
       result.push_back(-1);
   }
   else if(s.top()>num[i]){
       result.push_back(s.top());
   }
   s.push(num[i]);


}
reverse(result.begin(),result.end());
for(int i:result){
    cout<<i<<" ";
}









}
