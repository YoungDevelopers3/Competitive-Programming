
class Solution {
  public:
    string roundToNearest(string& s) {
               
               
                int n = s.length();
    string c = s;

    if (c[n-1] == '0') {
        return c;
    }

    if (c[n-1] >= '1' && c[n-1] <= '5') {
        c[n-1] = '0';
        return c;
    }

   
    c[n-1] = '0';
    int carry = 1;
    for (int i = n-2; i >= 0 && carry; --i) {
        if (c[i] == '9') {
            c[i] = '0';
            
        } else {
            c[i] = c[i] + 1;
            carry = 0;
        }
    }
    if (carry) {
       
        c = '1' + c;
    }
    return c;
   
               
               
               
               
               
               
               
               
               
               
               
               
               
               
    }
};