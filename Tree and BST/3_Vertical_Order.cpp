/*
Given a Binary Tree, print the vertical traversal of it starting from the leftmost level to the rightmost level.
If there are multiple nodes passing through a vertical line, then they should be printed as they appear in level order traversal of the tree.
*/



/* A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;    return v;
} 
        left = right = NULL;
    }
};
 */

// root: root node of the tree
vector<int> verticalOrder(Node *root)
{
    //Your code here
    map< int, queue<int> >mp;
    queue< pair< Node*, int >>q; 
    int hd=0;
    
    vector<int> v;
    if(root == NULL)
        return v;
    
    q.push(make_pair(root, hd));
    
    while(!q.empty())
    {
        pair<Node* ,int> p  = q.front();
        q.pop();
        
        Node* cur = p.first;
        int val = p.second;
        mp[val].push(cur->data); 
        
        if(cur->left)
            q.push(make_pair(cur->left, val-1));
            
        if(cur->right)
            q.push(make_pair(cur->right, val+1));
    }
    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        while(!it->second.empty())
        {
            v.push_back(it->second.front());
            it->second.pop();
        }
    }
    return v;
}