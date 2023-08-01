/*
Given a linked list of N nodes.
The task is to check if the the linked list has a loop. Linked list can contain self loop.
*/

bool detectLoop(Node* head)
{
    // your code here
    if(head == NULL)
        return -1;
    else
    {
        // hare and turtle method
        Node *fast = head;
        Node *slow = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow)
                return true;
        }
        return false;
    }
}