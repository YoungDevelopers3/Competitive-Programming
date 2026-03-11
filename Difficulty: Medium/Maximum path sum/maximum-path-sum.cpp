/*
class Node {
public:
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
    int find(Node* root,int &max_ans){
        if(root==NULL){
            return 0;
        }
        int left=max(0,find(root->left,max_ans));
        int right=max(0,find(root->right,max_ans));
        max_ans=max(max_ans,left+right+root->data);
        return root->data +max(left,right);
    }
    int findMaxSum(Node *root) {
        // code here
        int max_ans=INT_MIN;
        find(root,max_ans);
        return max_ans;
    }
};