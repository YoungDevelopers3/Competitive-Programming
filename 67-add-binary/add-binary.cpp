class Solution {
public:
    string addBinary(string a, string b) {
        int l_a=a.length()-1;
        int l_b=b.length()-1;
        int i=0;
        int carry=0;
        string sum="";
        while(i<=l_a || i<=l_b || carry!=0){
            int x=0,y=0;
            if(i<=l_a && a[l_a-i]=='1'){
                x=1;
            }  
            if(i<=l_b && b[l_b-i]=='1'){
                y=1;
            }
            sum=to_string((x+y+carry)%2)+sum;
            carry=(x+y+carry)/2;
            i++;
        }
        return sum;



    }
};