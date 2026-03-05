/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    int check(Node*root){
        if(root==NULL){
            return 0;
        }
        int lh=check(root->left);
        if(lh==-1){
            return -1;
        }
        int rh=check(root->right);
        if(rh==-1){
            return -1;
        }
        if(abs(lh-rh)>1){
            return -1;
        }
        return 1+max(lh,rh);
    }
    bool isBalanced(Node* root) {
        if(check(root)!=-1){
            return true;
        }
        return false;
        
    }
};