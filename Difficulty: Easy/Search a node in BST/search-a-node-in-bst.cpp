/*
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    bool search(Node* root, int key) {
        // code here
        if(root==NULL){
            return false;
        }
        else if(key==root->data){
            return true;
        }
        else if(key<root->data){
            return search(root->left,key);
        }
        else{
            return search(root->right,key);
        }
    }
};