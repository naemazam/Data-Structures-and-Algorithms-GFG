/*

*/
/* Tree node structure  used in the program

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

// return the Height of the given Binary Tree
int height(Node* node)
{
   // Your code here
   if(node == NULL)
        return 0;
    return (1 + max(height(node->left), height(node->right)));
}
