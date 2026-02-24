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
    void Inorder(Node *root,int k,int &ans,int &cnt){
        if(root==NULL){
            return ;
        }
        Inorder(root->left,k,ans,cnt);
        cnt++;
        if(cnt==k){
            ans=root->data;
            return;
        }
        Inorder(root->right,k,ans,cnt);
    }
    
    int kthSmallest(Node *root, int k) {
    int ans=-1;
    int cnt=0;
    Inorder(root,k,ans,cnt);
    return ans;
        
    }
};