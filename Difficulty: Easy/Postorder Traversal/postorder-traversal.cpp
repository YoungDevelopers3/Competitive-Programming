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
    void helper(vector<int> &ans,Node* root){
        if(root==NULL){
            return ;
        }
        helper(ans,root->left);
        helper(ans,root->right);
        ans.push_back(root->data);
    }
  
    vector<int> postOrder(Node* root) {
        vector<int>ans;
        helper(ans,root);
        return ans;
        
    }
};