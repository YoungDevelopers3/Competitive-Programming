/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  
    bool check(Node*left,Node*right){
        if(left==NULL || right==NULL){
            return left==right;
        }
        
        if(left->data !=right->data){
            return false;
        }
        
        return check(left->left,right->right) && check(left->right,right->left);
    }
  
    bool isSymmetric(Node* root) {
        return root==NULL || check(root->left,root->right);
        
    }
};