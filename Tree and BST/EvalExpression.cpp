

/*The structure of node is as follows
struct node{
    string data;
    node *left;
    node *right;
};
*/
int toInt(string s)
{
    int num = 0;
    if(s[0] != '-')
        for(int i=0; i<s.length(); i++)
            num  = num*10 +  (int(s[i]) - 48);
    else
        for(int i=1; i<s.length(); i++)
        {
            num = num*10 +  (int(s[i]) - 48);
            num = num * -1;
        }
    return num;
}

/*You are required to complete below method */
int evalTree(node* root) 
{
    // Your code here
    if(root == NULL) 
        return 0;
    if(root->left == NULL && root->right == NULL)
        return toInt(root->data);
    
    int l_val = evalTree(root->left);
    
    int r_val = evalTree(root->right);
    
    if (root->data == "+")  
        return l_val+r_val;  
  
    if (root->data == "-")  
        return l_val-r_val;  
  
    if (root->data == "*")  
        return l_val*r_val;  
  
    return l_val/r_val;  
}
