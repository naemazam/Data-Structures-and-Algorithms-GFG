/*
Given a singly linked list of N nodes.
The task is to find the middle of the linked list.
For example, if given linked list is 1->2->3->4->5 then the output should be 3.
If there are even nodes, then there would be two middle nodes,
we need to print the second middle element.
For example, if given linked list is 1->2->3->4->5->6 then the output should be 4.
*/

// Only the logic code
int getMiddle(Node *head)
{
   // Your code here
   if(head == NULL)
        return -1;
    else
    {
        // 2 pointer method
        Node *fast = head;
        Node *slow = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow->data;
    }
}