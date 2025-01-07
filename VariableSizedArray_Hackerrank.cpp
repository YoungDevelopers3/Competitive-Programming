#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n=0,q=0;
    cin>>n>>q; 
    vector <vector<int>> outer;
    for(int i=0;i<n;i++){
        int l=0;
        cin>>l;
        vector<int>inner;
        for(int j=0;j<l;j++){
            int num=0;
            cin>>num;
            inner.push_back(num);
        }
       outer.push_back(inner);
}
while(q--){
    int i=0,j=0;
    cin>>i>>j;
    cout<<outer[i][j]<<endl;
}


}
