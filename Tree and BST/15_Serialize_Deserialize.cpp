
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

/*this  function serializes 
the binary tree and stores 
it in the vector A*/
void serialize(Node *root,vector<int> &A)
{
    //Your code here
    if(root==NULL){
        A.push_back(-1);
        return;
    }
    A.push_back(root->data);
    serialize(root->left,A);
    serialize(root->right,A);
}

/*this function deserializes
 the serialized vector A*/
 int pre_index = 0;
Node * deSerialize(vector<int> &Arr)
{
   //Your code here
   if (pre_index == Arr.size() || Arr[pre_index] == -1) {
        pre_index += 1;
        pre_index %= Arr.size();
        return NULL; 
    } 
    Node *root = new Node(Arr[pre_index]); 
    pre_index += 1;
    pre_index %= Arr.size();
    root->left = deSerialize(Arr); 
    root->right = deSerialize(Arr); 
    return root;
}