/*

Consider Red lines of slope -1 passing between nodes (in following diagram). The diagonal sum in a binary tree is the sum of all node’s data lying between these lines. Given a Binary Tree of size N, print all diagonal sums.

For the following input tree, output should be 9, 19, 42.
9 is sum of 1, 3 and 5.
19 is sum of 2, 6, 4 and 7.
42 is sum of 9, 10, 11 and 12.
*/


/*Complete the function below
Node is as follows:
struct Node{
    int data;
    Node *left,*right;
};
*/
vector<int> diagonalSum(Node *root)
{
    //Your code here
    map< int, int>mp;
    queue< pair< Node*, int >>q;
    
    int d=0;
    vector<int> v;
    if(root == NULL)
        return v;

    q.push(make_pair(root, d));

    while(!q.empty())
    {
        pair<Node* ,int> p  = q.front();
        q.pop();

        Node* cur = p.first;
        int val = p.second;
        mp[val] += cur->data;
        
        if(cur->left)
            q.push(make_pair(cur->left, val+1));
            
        if(cur->right)
            q.push(make_pair(cur->right, val));
    }
    for(auto it=mp.begin(); it!=mp.end(); it++)
        v.push_back(it->second);
    return v;
}