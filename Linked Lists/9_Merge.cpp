/*
Given two sorted linked lists consisting of N and M nodes respectively.
The task is to merge both of the list (in-place) and return head of the merged list.
Note: It is strongly recommended to do merging in-place using O(1) extra space.
*/

Node* sortedMerge(Node* head_A, Node* head_B)  
{  
    
    // code here
    if(head_A == NULL) return head_B;
    if(head_B == NULL) return head_A;
    if(head_A->data < head_B->data)
    {
        head_A->next = sortedMerge(head_A->next, head_B);
        return head_A;
    }
    else
    {
        head_B->next = sortedMerge(head_A, head_B->next);
        return head_B;
    }
}