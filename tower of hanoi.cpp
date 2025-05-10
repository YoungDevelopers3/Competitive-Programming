#include<bits/stdc++.h>
using namespace std;
void solve(int disks,char source,char helper,char destination){
if(disks==1){
   cout<<"Move 1 disk from "<<source<<" to "<<destination<<endl;
   return;
}
solve(disks-1,source,destination,helper);
cout<<"Move disk "<<disks<<" from "<<source<<" to "<<destination <<endl;
solve(disks-1,helper,source,destination);


}


int main(){
int n=3;
solve(n,'A','B','C');


}
