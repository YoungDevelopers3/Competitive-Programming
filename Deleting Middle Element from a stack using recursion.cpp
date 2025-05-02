#include<bits/stdc++.h>
using namespace std;
void remove(stack<int>& st,int k){
 if(k==1){
     st.pop();
     return;
 }   
 int temp=st.top();
 st.pop();
 remove(st,k-1);
 st.push(temp);
}
int main(){
 stack<int>st;
 st.push(5);
 st.push(4);
 st.push(3);
 st.push(2);
 st.push(1);
 int k=(st.size()/2)+1;
 remove(st,k);
 while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
 }
      
}
