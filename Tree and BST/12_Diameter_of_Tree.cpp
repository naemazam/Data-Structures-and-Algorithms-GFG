/* Diameter of a tree */


/* Tree node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

/* Computes the diameter of binary tree with given root.  */
int find(Node *root,int &h)
{
    if(root==NULL)return 0;
    int lh=find(root->left,h);
    int rh=find(root->right,h);
    h=max(h,lh+rh+1);
    return max(lh,rh)+1;
}
int diameter(Node *root)
{
    int h=-1;
    find(root,h);
    return h;
}