
/*
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
void preOrderUtil(Node* node,vector<int> &v)
{
    if(node == NULL)
        return;

    v.push_back(node->data);
    
    preOrderUtil(node->left, v);

    preOrderUtil(node->right, v);
}
// Return a vector containing the preorder traversal of the tree


vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> v;
  preOrderUtil(root, v);
  return v;
}