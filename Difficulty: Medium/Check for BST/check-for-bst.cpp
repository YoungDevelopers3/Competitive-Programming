/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool helper(Node* root,long long minVal,long long maxVal){
        if(root==NULL){
            return true;
        }
        if(root->data <=minVal || root->data >=maxVal){
            return false;
        }
        return helper(root->left,minVal,root->data) && helper(root->right,root->data,maxVal);
    }
    bool isBST(Node* root) {
        // code here
        return helper(root,LLONG_MIN,LLONG_MAX);
        
    }
};