// User function Template for C++

class Solution {
  public:
  
  int countleft(Node* root){
      int h=0;
      while(root){
          h++;
          root=root->left;
      }
      return h;
  }
  
  int countright(Node* root){
      int h=0;
      while(root){
          h++;
          root=root->right;
      }
      return h;
  }
  
  
  
    int countNodes(Node* root) {
        // Write your code here
        if(root==NULL){
            return 0;
        }
        int lh=countleft(root);
        int rh=countright(root);
        
        if(lh==rh){
            return pow(2,lh)-1;
        }
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};