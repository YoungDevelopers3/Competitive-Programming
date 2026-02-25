// User function template in C++

/*

typedef struct Node
{
    int data;
    struct Node *left, *right;
} Node;


// A utility function to create a new tree node
Node* newNode( int data )
{
    Node* temp = (Node *)malloc( sizeof( Node ) );
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

*/

class Solution {
  public:
    // Function that constructs BST from its preorder traversal.
    Node* helper(int pre[],int size ,int& i,int bound){
        if(i==size || pre[i]>bound){
            return NULL;
        }
        Node* root=new Node();
        root->data=pre[i++];
        root->left=NULL;
        root->right=NULL;
        root->left=helper(pre,size,i,root->data);
        root->right=helper(pre,size,i,bound);
        return root;
        
    }
    Node* Bst(int pre[], int size) {
        // code here
        int i=0;
        return helper(pre,size,i,INT_MAX);
        
    }
};