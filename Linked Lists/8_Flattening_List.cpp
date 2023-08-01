/*
Given a Linked List of size N,
where every node represents a linked list and contains two pointers of its type:
(i) a next pointer to the next node,
(ii) a bottom pointer to a linked list where this node is head.

You have to flatten the linked list to a single linked list which should be sorted.
*/
/*  Function which returns the  root of
    the flattened linked list. */
Node *merge (Node *h1,Node *h2)
{
    if(h1==NULL) return(h2);
    if(h2==NULL) return(h1);
    if(h1->data<h2->data) 
    {
        h1->bottom=merge(h1->bottom,h2);
        return(h1);
    }
    else
    {
        h2->bottom=merge(h1,h2->bottom);
        return(h2);
    }
}
Node *flatten(Node *root)
{
   // Your code here
   Node *a =root;
    Node  *b=root->next;
    while(b!=NULL)
    {
        Node *c=b->next;
        a=merge(a,b);
        b=c;
        
    }
    return(a);
}