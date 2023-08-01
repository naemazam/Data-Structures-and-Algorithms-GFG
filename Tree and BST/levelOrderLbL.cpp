/*
Given a Binary Tree, your task is to print its level order traversal such that each level is separated by $.
For the below tree the output will be 1 $ 2 3 $ 4 5 6 7 $ 8 $.

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
void levelOrder(Node* node)
{
  //Your code 
    if(node == NULL)
        return;
    queue<Node*> q;
    q.push(node);
    q.push(NULL);
    Node* root;
    while(q.size()!=1) 
    {
        root = q.front();
        q.pop();
        if(root!=NULL)
            cout<<root->data<<" ";
        else if(root==NULL) 
        {
            cout<<"$"<<" ";
            q.push(NULL);
            continue;
        }
      
        if(root->left)
            q.push(root->left);
        if(root->right)
            q.push(root->right);
  }
    cout<<"$"<<" ";
  return;
}