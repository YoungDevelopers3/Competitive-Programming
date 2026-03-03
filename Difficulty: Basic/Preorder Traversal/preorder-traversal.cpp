/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
   
   void helper(vector<int> &ans,Node* root){
       if(root==NULL){
           return;
       }
       ans.push_back(root->data);
       helper(ans,root->left);
       helper(ans,root->right);
       
   }
  
    vector<int> preOrder(Node* root) {
        // code here
        vector<int>ans;
        helper(ans,root);
        return ans;
        
        
        
    }
};