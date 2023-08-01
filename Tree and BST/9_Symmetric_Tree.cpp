/*
Given a Binary Tree. Check whether it is Symmetric or not, i.e. whether the binary tree is a Mirror image of itself or not.
*/

/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return true/false denoting whether the tree is Symmetric or not
bool helper(Node* root1, Node* root2)
{
    if(!root1 and !root2) 
        return true;

    if(root1 and root2 and root1->data==root2->data)
        return (helper(root1->left,root2->right) and helper(root1->right, root2->left));

    return false;
}
bool isSymmetric(struct Node* root)
{
	// Code here
	return helper(root,root);
}