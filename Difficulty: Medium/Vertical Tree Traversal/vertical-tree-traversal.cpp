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
    vector<vector<int>> verticalOrder(Node *root) {
         map<int, vector<int>> mp;
    queue<pair<Node*, int>> q;
    
    q.push({root, 0});
    
    while(!q.empty()){
        auto front = q.front();
        q.pop();
        
        Node* node = front.first;
        int hd = front.second;
        
        mp[hd].push_back(node->data);
        
        if(node->left){
            q.push({node->left, hd - 1});
        }
        
        if(node->right){
            q.push({node->right, hd + 1});
        }
    }
    
    vector<vector<int>> ans;
    
    for(auto it : mp){
        ans.push_back(it.second);
    }
    
    return ans;
        
    }
};