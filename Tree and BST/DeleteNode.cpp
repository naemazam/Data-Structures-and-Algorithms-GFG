
/*
Structre of the node of the tree is as
struct Node
{
	int data;
	Node* left, *right;
};
*/
// you are required to complete this function

void delLastNode(Node* root,Node* d_node) 
{ 
    queue< Node*> q; 
    q.push(root); 
  
    // Do level order traversal until last node 
    struct Node* temp; 
    while (!q.empty()) { 
        temp = q.front(); 
        q.pop(); 
        if (temp == d_node) 
        { 
            temp = NULL; 
            delete (d_node); 
            return; 
        } 
        if (temp->right) 
        { 
            if (temp->right == d_node) 
            { 
                temp->right = NULL; 
                delete (d_node); 
                return; 
            } 
            else
                q.push(temp->right); 
        } 
  
        if (temp->left) 
        { 
            if (temp->left == d_node) 
            { 
                temp->left = NULL; 
                delete (d_node); 
                return; 
            } 
            else
                q.push(temp->left); 
        } 
    } 
} 
void deletionBT(struct Node* root, int key)
{
    if(root == NULL) 
        return; 
  
    if(root->left == NULL && root->right == NULL)
    { 
        if(root->data == key) 
            return; 
        else
            return; 
    } 
    // find key
    
    Node *keyNode = NULL, *p;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        p = q.front();
        q.pop();
        if(p->data == key) 
            keyNode = p;
        if(p->left != NULL)
            q.push(p->left);
        if(p->right != NULL)
            q.push(p->right);
    }
    if(keyNode != NULL)
    {
        Node* lastNode = p;
        swap(keyNode->data, lastNode->data);
        delLastNode(root, lastNode);
    }
    return;
}