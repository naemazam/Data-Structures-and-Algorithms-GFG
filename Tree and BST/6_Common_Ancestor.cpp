
/*The structure of a BST Node is as follows:

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// Returns the LCA of the nodes with values n1 and n2
// in the BST rooted at 'root' 
Node* LCA(Node *root, int n1, int n2)
{
    //Your code here
    if (root==NULL) 
        return NULL;
    
    if (root->data == n1 || root->data == n2) 
        return root;
    
    Node *ln, *rn;
    ln = LCA(root->left, n1, n2);
    rn = LCA(root->right, n1, n2);
    
    if(ln && rn) 
        return root;
    
    if(ln) 
        return ln;
    
    if(rn) 
        return rn;
    
    return NULL;
}
