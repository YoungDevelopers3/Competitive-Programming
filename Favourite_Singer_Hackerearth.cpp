#include<bits/stdc++.h>
using namespace std;
int main(){
    int N=0;
    cin>>N;
    vector<int>singers;
    for(int i=0;i<N;i++){
        int num=0;
        cin>>num;
        singers.push_back(num);
    }
    unordered_map<int,int>frequency;
    for(auto singer:singers){
        frequency[singer]++;
    }
    int max_freq=0;
    for(auto it:frequency){
        max_freq=max(max_freq,it.second);
    }
    int fav=0;
    for(auto it:frequency){
        if(it.second==max_freq){
            fav++;
        }
    }
    cout<<fav;
}