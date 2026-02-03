bool decode(string S) {
    // your code here
    string st="hello";
    int n=S.size();
    if(S.size()<n){
        return false;
    }
    int a, b=0;
    string temp="";
    while(a<n && b<S.size()){
        if(st[a]==S[b]){
            temp=temp+S[b];
            a++;
            b++;
        }
        else{
            b++;
        }
    }
    if(temp==st){
        return true;
    }
    return false;
}