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
          return;
      }
      helper(ans,root->left);
      ans.push_back(root->data);
      helper(ans,root->right);
  }
  
    vector<int> inOrder(Node* root) {
        vector<int>ans;
        helper(ans,root);
        return ans;
        
    }
};