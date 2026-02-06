class Solution {
public:
    int vowelConsonantScore(string s) {
        int v=0,c=0;
        for(char ch:s){
            if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
                v++;
            }
            else if((ch==' ') || ch=='0' || ch=='1' || ch=='2' || ch=='3'|| ch=='4'|| ch=='5'|| ch=='6'|| ch=='7'|| ch=='8'|| ch=='9'){
                continue;
            }
            else{
                c++;
            }
        }
        if(c<=0){
            return 0;
        }
        return floor(v/c);
        
    }
};