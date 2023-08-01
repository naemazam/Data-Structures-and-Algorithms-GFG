/*
Given a linked list consisting of L nodes and given a number N.
The task is to find the Nth node from the end of the linked list.
*/

int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node *p1 = head, *p2 = head;
       int len = 0;
       while(p1)
       {
           p1 = p1->next;
           len++;
       }
       if(len < n ) 
            return -1;
       else
        {
            for(int i=0; i < (len-n); i++)   
            {
                p2 = p2->next;
            }
            return p2->data;
        }
}
