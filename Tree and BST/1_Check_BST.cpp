/*
Given a binary tree. Check whether it is a BST or not.
*/

/* A binary tree node has data, pointer to left child
   and a pointer to right child
   
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

int isBSTUtil(Node* node, int min, int max)  
{  
    /* an empty tree is BST */
    if (node==NULL)  
        return 1;  
              
    /* false if this node violates 
    the min/max constraint */
    if (node->data < min || node->data > max)  
        return 0;  
      
    /* otherwise check the subtrees recursively,  
    tightening the min or max constraint */
    return
        isBSTUtil(node->left, min, node->data-1) && // Allow only distinct values  
        isBSTUtil(node->right, node->data+1, max); // Allow only distinct values  
}  

// return true if the given tree is a BST, else return false
bool isBST(Node* node) 
{
    // Your code here
    return(isBSTUtil(node, INT_MIN, INT_MAX));  
}
