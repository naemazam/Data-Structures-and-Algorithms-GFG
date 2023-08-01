/*
Given two numbers represented by two linked lists of size N and M.
The task is to return a sum list.
The sum list is a linked list representation of the addition of two input numbers.
*/

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

struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    // code here
    Node *p1 = reverseList(first);
    Node *p2 = reverseList(second);
    int carry = 0;
    Node *prev = NULL, *curr = NULL, *head = NULL; 
    while(p1 || p2)
    {
        int sum = 0;
        if(p1) sum += p1->data;
        if(p2) sum += p2->data;
        sum += carry;
        if(sum/10 == 1 )
        {
            carry = 1;
            sum = sum%10;
        }
        else
            carry = 0;
        curr = new Node(sum);
        if(prev)
            prev->next = curr;
        else
            head = curr;
        prev = curr;
        if(p1)
            p1 = p1->next;
        if(p2)
            p2 = p2->next;
    }
    if(carry)
    {
        curr = new Node(carry);
        prev->next = curr;
        prev = curr;
    }
    head = reverseList(head);
    return head;
}
