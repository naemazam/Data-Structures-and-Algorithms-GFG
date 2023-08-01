
/* A tree Node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */


void reversePrint(Node *root)
{
    //Your code here
    if(root == NULL)
        return;
    queue <Node*> q;
    stack <int> s;
    q.push(root);
    while(!q.empty())
    {
        Node* p = q.front();
        q.pop();
        s.push(p->data);
        if(p->right != NULL)
            q.push(p->right);
        if(p->left != NULL)
            q.push(p->left);
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return;
}