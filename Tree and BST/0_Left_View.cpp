/*
Given a Binary Tree, print Left view of it.
Left view of a Binary Tree is set of nodes visible when tree is visited from Left side.
The task is to complete the function leftView(), which accepts root of the tree as argument.

Left view of following tree is 1 2 4 8.

          1
       /     \
     2        3
   /   \     /  \
  4     5   6    7
   \
     8
*/

/* A binary tree node

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

// A wrapper over leftViewUtil()
void leftView(Node *root)
{
   // Your code here
   if(root == NULL)
        return;
    else if(root->left)
    {
        cout<<root->data<<" ";
        leftView(root->left);
    }
    else
    {
        cout<<root->data<<" ";
        leftView(root->right);
    }
}

