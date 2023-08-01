

/* A binary tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

// This function should return tree if passed  tree 
// is balanced, else false. 
int height(Node * root)
{
    if(root==NULL) return 0;
    return 1+max(height(root->right),height(root->left));
}

bool isBalanced(Node *root)
{
    if(root==NULL) return true;
    if( !isBalanced(root->left) || !isBalanced(root->right) || max(height(root->left),height(root->right)) - min(height(root->left),height(root->right))>1 ) 
        return false;
    return true;
}