#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    vector<int>v;
    for(int i=1;i<n;i++){
        int num=0;
        cin>>num;
        v.push_back(num);
    }

    int sum_vec=0,sum_arr=0;
   for(int i=0;i<v.size();i++){
      sum_vec=sum_vec+v[i];
   }
   for(int i=1;i<=n;i++){
       sum_arr=sum_arr+i;
   }
   cout<<sum_arr-sum_vec<<endl;
 
}
