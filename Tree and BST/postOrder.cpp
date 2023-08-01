

//User function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
void postOrderUtil(Node* node,vector<int> &v)
{
    if(node == NULL)
        return;

    postOrderUtil(node->left, v);

    postOrderUtil(node->right, v);
    
    v.push_back(node->data);
}
// Return a vector containing the postorder traversal of the tree
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> v;
  postOrderUtil(root, v);
  return v;
}
