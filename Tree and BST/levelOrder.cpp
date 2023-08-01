

/* A binary tree Node

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

//You are required to complete this method
vector<int> levelOrder(Node* node)
{
  //Your code here
  
  vector<int> v;
  if(node == NULL)
    return v;
  queue<Node*> q;
  q.push(node);
  
  while(!q.empty())
    {
        Node* p = q.front();
        q.pop();
        v.push_back(p->data);
        if(p->left != NULL)
            q.push(p->left);
        if(p->right != NULL)
            q.push(p->right);
    }
  return v;
}