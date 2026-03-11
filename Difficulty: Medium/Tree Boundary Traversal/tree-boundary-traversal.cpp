/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  
    void addLeftBoundary(Node* root,vector<int> &ans){
        Node* current=root;
        while(current){
            if(!(current->left==NULL && current->right==NULL)){
                ans.push_back(current->data);
            }
            if(current->left){
                current=current->left;
            }
            else{
                current=current->right;
            }
        }
    }
    
    void addLeaves(Node* root,vector<int>& ans){
        if(root==NULL){
            return;
        }
        
        if(root->left==NULL && root->right==NULL){
            ans.push_back(root->data);
            return;
        }
        addLeaves(root->left,ans);
        addLeaves(root->right,ans);
    }
    
    void addRightBoundary(Node* root,vector<int> &ans){
        Node* current=root;
        vector<int>temp;
        while(current){
            if(!(current->left==NULL && current->right==NULL)){
                temp.push_back(current->data);
            }
            if(current->right){
                current=current->right;
            }
            else{
                current=current->left;
            }
        }
        
        for(int i=temp.size()-1;i>=0;i--){
            ans.push_back(temp[i]);
        }
    }
    
    
    vector<int> boundaryTraversal(Node *root) {
        vector<int>ans;
        if(!root){
            return ans;
        }
         if(!(root->left==NULL && root->right==NULL)){
            ans.push_back(root->data);
          }
       
        addLeftBoundary(root->left,ans);
        addLeaves(root,ans);
        addRightBoundary(root->right,ans);
        
        return ans;
        
    }
};