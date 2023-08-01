
/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
int sum(Node* node)  
{ 
    if (node == NULL) 
        return 0; 
    return sum(node->left) + node->data + sum(node->right); 
} 

/* returns 1 if sum property holds for the given 
   node and both of its children */
bool isSumTree(Node* node)  
{ 
    int ls, rs; 

    /* If node is NULL or it's a leaf node then 
       return true */
    if ((node == NULL) || (node->left == NULL && node->right == NULL)) 
        return 1; 

    /* Get sum of nodes in left and right subtrees */
    ls = sum(node->left); 
    rs = sum(node->right); 

    /* if the node and both of its children satisfy the 
       property return 1 else 0*/
    if ((node->data == ls + rs) && (isSumTree(node->left) != 0) 
            && (isSumTree(node->right)) != 0) 
        return 1; 

    return 0; 
} 