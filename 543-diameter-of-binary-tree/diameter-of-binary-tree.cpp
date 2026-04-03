/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int calc(TreeNode* root,int &diameter){
        if(root==NULL){
            return 0;
        }
        int l_h=calc(root->left,diameter);
        int r_h=calc(root->right,diameter);
        diameter=max(diameter,l_h+r_h);
        return 1+max(l_h,r_h);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        calc(root,diameter); 
        return diameter;   
    }
};