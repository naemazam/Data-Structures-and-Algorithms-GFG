/*
Given a linked list of N nodes where nodes can contain values 0s, 1s, and 2s only.
The task is to segregate 0s, 1s, and 2s linked list such that all zeros segregate to head side,
2s at the end of the linked list, and 1s in the mid of 0s and 2s.
*/

Node* segregate(Node *head)
{
    // Add code here
    int n0 = 0, n1 = 0, n2 = 0;
        Node *crr = head;
        while (crr) 
        {
            if (crr->data == 0) 
                n0++;
            else if (crr->data == 1) 
                n1++;
            else 
                n2++;
            crr = crr->next;
        }
        crr = head;
        while (n0-- > 0) 
        {
            crr->data = 0;
            crr = crr->next;
        }
        while (n1-- > 0) 
        {
            crr->data = 1;
            crr = crr->next;
        }
        while (n2-- > 0) {
            crr->data = 2;
            crr = crr->next;
        }
    return head;
}