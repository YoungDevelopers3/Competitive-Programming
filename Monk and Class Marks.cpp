#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,string>a,pair<int,string>b){
      if(a.first==b.first){
          return a.second>b.second;
      }
      return a.first<b.first;
  }
int main(){
  int n;
  cin>>n;
  vector<pair<int,string>> students;
  while(n--){
    int marks;
    string name;
    cin>>name>>marks;
    students.push_back({marks,name});
  }
  
  sort(students.rbegin(),students.rend(),compare);


  for(auto it: students){
    cout<<it.second<<" "<<it.first<<endl;
  }
  
}