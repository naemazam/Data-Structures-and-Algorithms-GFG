

/* struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
}; */

// Should set the nextRight for all nodes
void connect(Node *p)
{
    
    if(p == NULL)
        return;
    queue<Node*>q;
    q.push(p);
    Node* temp;
    while(!q.empty())
    {
        //size at level
        int s = q.size();
        while(s--)
        {
            temp = q.front();
            q.pop();
            
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
            if(s>0)
                temp->nextRight=q.front();
        }
        //last node at a level
        temp->nextRight=NULL;
    }
}