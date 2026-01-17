class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int right=0;
        int left=0;
        int operations=k;
        int recolour=0;
        for(right=0;right<blocks.size();right++){
             if(blocks[right]=='W'){
                recolour++;
             }
             if(right-left+1==k){
                operations=min(operations,recolour);
                if(blocks[left]=='W'){
                    recolour--;
                }
                left++;
             }
        }
        return operations;
    }
};