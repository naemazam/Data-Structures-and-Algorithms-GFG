/*
You are given a linked list of N nodes.
The task is to remove the loop from the linked list, if present.
*/
void removeLoop(Node* head)
{
    // code here
    // just remove the loop without losing any nodes
    if(head == NULL || head->next == NULL)
        return;
    else
    {
        // hare and turtle method
        Node *fast = head, *slow = head;
        // detect loop
        bool loop = false;
        while(slow && fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow)
            {
                loop = true;
                break;
            }
        }
        if(!loop)
            return;
        // cal len of loop    
        int loop_len = 0;
        loop_len = 1;
        while(fast->next != slow)
        {
            loop_len += 1;
            fast = fast->next;
        }
            
        // remove loop
        slow = head;
        fast = head;
        while(loop_len--)
            fast = fast->next;
        while(fast != slow)
        {
            fast = fast->next;
            slow = slow->next;
        }
        while(fast->next != slow)
            fast = fast->next;
            
        fast->next = NULL;
        return;
    }   
    
}