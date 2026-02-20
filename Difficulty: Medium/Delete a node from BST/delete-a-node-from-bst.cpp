/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    Node* delNode(Node* root, int x) {
        if(root==NULL){
            return NULL;
        }
        if(x<root->data){
            root->left=delNode(root->left,x);
        }
        else if(x>root->data){
            root->right=delNode(root->right,x);
        }
        else{
            if(root->left==NULL){
                Node* temp=root->right;
                delete root;
                return temp;
            }
            else if(root->right==NULL){
                Node* temp=root->left;
                delete root;
                return temp;
            }
            else{
                Node* succ=root->right;
                while(succ->left!=NULL){
                    succ=succ->left;
                }
                root->data=succ->data;
                root->right=delNode(root->right,succ->data);
            }
        }
        return root;
 
    }
};