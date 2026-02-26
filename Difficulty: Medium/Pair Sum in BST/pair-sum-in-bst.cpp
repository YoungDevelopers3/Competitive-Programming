/*
Node is as follows
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void Inorder(Node* root,vector<int> &arr){
        if(root==NULL){
            return;
        }
        Inorder(root->left,arr);
        arr.push_back(root->data);
        Inorder(root->right,arr);
    }
    bool findTarget(Node *root, int target) {
        vector<int>arr;
        Inorder(root,arr);
        int i=0,j=arr.size()-1;
        while(i<j){
            int s=arr[i]+arr[j];
            if(s==target){
                return true;
            }
            else if(s<target){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
    }
};