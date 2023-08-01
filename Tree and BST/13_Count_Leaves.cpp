

//User function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

/* Should return count of leaves. For example, return
    value should be 2 for following tree.
         10
      /      \ 
   20       30 */
void inOrderCount(Node* node, int &count)
{
    if(node == NULL) return;
    if(!node->left && !node->right) count++;
    if(node->left)  inOrderCount(node->left, count);
    if(node->right) inOrderCount(node->right, count);
    
}
int countLeaves(Node* root)
{
  // Your code here
  int count = 0;
  inOrderCount(root, count);
  return count;
}
