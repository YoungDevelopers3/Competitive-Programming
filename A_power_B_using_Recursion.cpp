#include<bits/stdc++.h>
using namespace std;
int calc(int a,int b){

if(b==0){
    return 1;
}

else if(b%2==0){
    int c= calc(a,b/2);
    return c * c;
}

else{
    return a* calc(a,b-1);
}

}

int main(){
int a=0,b=0;
cin>>a>>b;
cout<<calc(a,b);

    
}
