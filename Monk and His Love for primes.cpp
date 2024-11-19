#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int sum_upper=0,count=0,sum_lower=0,x=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
            sum_lower=sum_lower+(int)s[i];
            
        }
       else if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
            sum_upper=sum_upper+(int)s[i];
            //cout<<sum_upper<<s[i]<<"\n";
        }

    }




    x=sum_upper-sum_lower;
    if(x<0){
        x=abs(x);
    }
    for(int j=1;j<=x;j++){
        if(x%j==0){
            count++;
        }
    }
    if(count>2){
        cout<<"0";
    }
    else{
        cout<<"1";
    }


}
