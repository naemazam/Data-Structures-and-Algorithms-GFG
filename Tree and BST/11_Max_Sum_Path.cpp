/*
Given a binary tree in which each node element contains a number.
Find the maximum possible sum from one leaf node to another.
*/
int traverse(Node* node, int &maxsum)
{
    int l = INT_MIN, r = INT_MIN;
    if(!node)
        return 0;
    if(node->left)
        l = traverse(node->left, maxsum);
    if(node->right)
        r = traverse(node->right, maxsum);

    if(node->left && node->right)
        maxsum = max(maxsum, l+r+node->data);
    int x = max(l, r);

    if(x == INT_MIN)
        x = 0;
    return x + node->data;
}

int maxPathSum(Node* root)
{
    int maxsum = INT_MIN;
    // code here
    traverse(root, maxsum);
    return maxsum;

}