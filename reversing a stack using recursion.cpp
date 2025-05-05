#include<bits/stdc++.h>
using namespace std;
void insert(stack<int>& st,int val){
   if(st.size()==0){
       st.push(val);
       return;
   } 
   int temp=st.top();
    st.pop();
    insert(st,val);
    st.push(temp);
}
void rev(stack<int>& st){
   if(st.size()==0){
       return;
   } 
int val=st.top();
st.pop();
rev(st);
insert(st,val);
}
int main(){
stack<int>st;
st.push(5);
st.push(4);
st.push(3);
st.push(2);
st.push(1);
    
rev(st);
    
while(!st.empty()){
cout<<st.top()<<endl;
st.pop();
}
    
}
