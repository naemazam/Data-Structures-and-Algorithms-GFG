/*
Given a singly linked list of size N. The task is to swap elements in the linked list pairwise.
For example, if the input list is 1 2 3 4, the resulting list after swaps will be 2 1 4 3.
*/

Node* pairWiseSwap(struct Node* head) 
{
    // The task is to complete this method
    Node* prev = NULL, *curr= head, *next;
    int count = 2;
    while(count-- && curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    if(head != NULL)
        head->next = pairWiseSwap(next);
    return prev;
}