/*
Given a linked list of size N.
The task is to reverse every k nodes (where k is an input to the function) in the linked list.
*/


struct node *reverse (struct node *head, int k)
{ 
    // Complete this method
    node* prev=NULL;
    node* curr=head;
    node* q;
    int counter=k;
    while(counter-- && curr!=NULL)
    {
        q=curr->next;
        curr->next=prev;
        prev=curr;
        curr=q;
    }
    if(head!=NULL) head->next=reverse(q,k);
    return prev;
}