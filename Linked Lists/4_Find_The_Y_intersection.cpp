/*
Given two singly linked lists of size N and M,
write a program to get the point where two linked lists intersect each other.
*/


int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int c1, c2;
    c1 = c2 = 0;
    Node *t1 = head1;
    while(t1!=NULL)
    {
        c1 += 1;
        t1 = t1->next;
    }
    Node *t2 = head2;
    while(t2!= NULL)
    {
        c2 += 1;
        t2 = t2->next;
    }
    int d = abs(c2-c1);

    t1 = head1;
    t2 = head2;
    
    if(c2 > c1)
    {
        while(d--)
            t2 = t2->next;
    }
    else
    {
        while(d--)
            t1 = t1->next;   
    }
    while(t1 != NULL && t2 != NULL)
    {
        if(t1->data == t2->data && t1 == t2)
            return t2->data;
        t1 = t1->next; 
        t2 = t2->next;
    }
    return -1;
}