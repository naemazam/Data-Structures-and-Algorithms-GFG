/*
Given a singly linked list of size N.
The task is to rotate the linked list counter-clockwise by k nodes,
where k is a given positive integer smaller than or equal to length of the linked list.
*/


Node* rotate(Node* head, int k)
{
    // Your code here
    Node* temp = head;
    while(temp->next)
    {
        temp = temp->next;
    }
    temp->next = head; // linking last node with first node
    Node *end;
    while(k--)
    {
        end = head;
        head = head->next;
    }
    // end is previous of updated head, so make end of next as null as it is the last node of updated linked list
    end->next = NULL;
    return head;
}