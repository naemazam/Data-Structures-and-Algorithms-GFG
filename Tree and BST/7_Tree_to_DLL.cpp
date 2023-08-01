

/* Structure for tree and linked list

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

// This function should return head to the DLL
void InOrder(Node *root, Node* &head)
{
    static Node *prev=NULL;
    if(!root)
        return;
    // if node is leaf
    InOrder(root->left,head);
    
    if(!head)
        head=root;
    else
    {
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    InOrder(root->right,head);
}

Node * bToDLL(Node *root)
{
    // your code here
    Node* head = NULL;
    InOrder(root, head);
    return head;
}

