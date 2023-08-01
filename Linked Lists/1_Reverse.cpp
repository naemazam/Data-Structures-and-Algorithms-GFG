// Given a linked list of N nodes. The task is to reverse this list.
// Also look into geeksforgeeks recursion method
// Should reverse list and return new head.
struct Node* reverseList(struct Node *head)
{
    // code here
    if(head==NULL || head->next == NULL)
        return head;
    else
    {
        Node *first = head;
        Node *second = head->next;
        Node *tmp = NULL;
        while(first!=NULL || second!=NULL)
        {
            first->next = tmp;
            tmp = first;
            first = second;
            if(second!= NULL)
                second = second->next;
        }
        head = tmp;
    }
    return head;
    // return head of reversed list
}