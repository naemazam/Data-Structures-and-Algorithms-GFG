
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
}; */

void inOrderUtil(Node* node,vector<int> &v)
{
    if(node == NULL)
        return;
    inOrderUtil(node->left, v);
    v.push_back(node->data);
    inOrderUtil(node->right, v);
}
// Return a vector containing the inorder traversal of the tree
vector<int> inOrder(Node* root)
{
  // Your code here
  vector<int> v;
  inOrderUtil(root, v);
  return v;
}
