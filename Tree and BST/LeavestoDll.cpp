/*Complete the function below
Node is as follows:
struct Node{
    int data;
    Node *left,*right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
// return the head of the DLL and remove those node from the tree as well.
Node* inorder(Node *root,Node** head)
{
    static Node *prev=NULL;
    if(!root)
        return NULL;
    // if node is leaf 
    if(!root->left && !root->right)
    {
        if(!(*head))
            *head=root;
        else
        {
            root->left=prev;
            prev->right=root;
        }
        prev=root;
        return NULL;
    }
    root->left=inorder(root->left,head);
    root->right=inorder(root->right,head);
}
    // return the head of the DLL and remove those node from the tree as well.
Node * convertToDLL(Node *root)
{
    Node *head=NULL;
    inorder(root, head);
    return head;
}