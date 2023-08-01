/*
Given a Binary Tree, write a function to populate next pointer for all nodes.
The next pointer for every node should be set to point to inorder successor.
*/
/* Set next of p and all descendents of p by traversing them in reverse Inorder */

/*
Node Structure

struct node
{
	int data;
	struct node *left;
	struct node *right;
	struct node *next;
	
	node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	    next = NULL;
	}
};
*/
void order(node* root,vector<node*>&v )
{
    if(root==NULL) return;
    order(root->left,v);
    v.push_back(root);
    order(root->right,v);
}
void populateNext(struct node* p)
{
    // Your code goes here
    vector<node*> v;
    order(p, v);
    for(int i=0; i<v.size()-1; i++)
    {
        node* temp=v[i];
        temp->next=v[i+1];
    }