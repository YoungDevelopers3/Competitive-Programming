#include<bits/stdc++.h>
using namespace std;
void insertstack(stack<int>& st,int val){
    if(st.empty() || st.top()>=val){
        st.push(val);
        return;
    }
    int temp=st.top();
    st.pop();
    insertstack(st,val);
    st.push(temp);
}
void sortstack(stack<int>& st){
    if(st.size()<=1){
        return;
    }
    int val=st.top();
    st.pop();
    sortstack(st);
    insertstack(st,val);
}
int main(){
 stack<int>st;
    st.push(6);
    st.push(8);
    st.push(2);
    st.push(1);
    st.push(10);
    st.push(3);
    
    sortstack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
    
    
    
    
