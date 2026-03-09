/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    int find(Node* root,int &diameter){
        if(root==NULL){
            return 0;
        }
        int left=find(root->left,diameter);
        int right=find(root->right,diameter);
        diameter=max(diameter,left+right);
        return 1+max(left,right);
    }
    int diameter(Node* root) {
        int diameter=0;
        find(root,diameter);
        return diameter;
        
    }
};