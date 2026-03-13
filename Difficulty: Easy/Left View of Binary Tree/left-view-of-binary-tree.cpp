/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    void helper(Node* root,vector<int> &ans,int level){
        if(root==NULL){
            return;
        }
        if(level==ans.size()){
            ans.push_back(root->data);
        }
        helper(root->left,ans,level+1);
        helper(root->right,ans,level+1);
    }
    
    
    vector<int> leftView(Node *root) {
      vector<int>ans;
      int level=0;
      helper(root,ans,level);
      return ans;
        
    }
};