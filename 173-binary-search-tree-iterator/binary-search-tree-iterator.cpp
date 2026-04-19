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
class BSTIterator {
public:
     stack<TreeNode*>st;
    void helper(TreeNode* node){
        while(node!=NULL){
            st.push(node);
            node=node->left;
        }
    }
    BSTIterator(TreeNode* root) {
        helper(root);
    }
    
    int next() {
        TreeNode* topNode=st.top();
        st.pop();
        int value=topNode->val;
        if(topNode->right!=NULL){
            helper(topNode->right);
        }
        return value;
    }
    
    bool hasNext() {
        return !st.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */