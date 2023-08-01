/*
Complete the function to print spiral order traversal of a tree.
*/


/* A binary tree node has data, pointer to left child
   and a pointer to right child  
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

void printSpiral(Node* root)
{
    if(root==NULL)
        return;
    deque<Node *> q;
    q.push_front(root);
    cout<<root->data<<" ";
    int c = 1;
    while (!q.empty())
    {
        int n=q.size();
        for(int i=0; i<n; i++)
        {
            if(c%2==0)
            {
                Node* cur = q.front();
                q.pop_front();
                if(cur->right)
                {
                    q.push_back(cur->right);
                    cout<<cur->right->data<<" ";
                }
                if(cur->left)
                {
                    q.push_back(cur->left);
                    cout<<cur->left->data<<" ";
                }
            }
            else
            {
                Node* cur = q.back();
                q.pop_back();
                if (cur->left)
                {
                    q.push_front(cur->left);
                    cout<<cur->left->data<<" ";
                }
                if (cur->right)
                {
                    q.push_front(cur->right);
                    cout<<cur->right->data<<" ";
                }
            }
        }
        c++;
    }

}
