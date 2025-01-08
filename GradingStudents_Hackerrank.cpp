#include<bits/stdc++.h>
using namespace std;
int main(){
int n=0;
cin>>n;
vector<int>grades;
for(int i=0;i<n;i++){
    int num=0;
    cin>>num;
    grades.push_back(num);
}
vector<int>results;
for(int num:grades){
    int temp=ceil(num/5.0)*5;
    int diff=temp-num;
    if(num>=38 && diff<3){
        results.push_back(temp);
    }
    else{
        results.push_back(num);
    }
}

for(int i:results){
    cout<<i<<endl;
}


}
