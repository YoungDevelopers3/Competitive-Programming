/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        map<int,int> mp;
    queue<pair<Node*,int>> q;
    
    q.push({root,0});
    
    while(!q.empty()){
        
        auto it = q.front();
        q.pop();
        
        Node* node = it.first;
        int col = it.second;
        
        // always overwrite
        mp[col] = node->data;
        
        if(node->left){
            q.push({node->left, col-1});
        }
        
        if(node->right){
            q.push({node->right, col+1});
        }
    }
    
    vector<int> ans;
    
    for(auto it : mp){
        ans.push_back(it.second);
    }
    
    return ans;
        
    }
};