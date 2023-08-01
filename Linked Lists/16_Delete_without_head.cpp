/*
You are given a pointer/ reference to the node which is to be deleted from the linked list of N nodes.
The task is to delete the node.
Pointer/ reference to head node is not given.
Note: No head reference is given to you.
*/
void deleteNode(Node *node)
{
   // Your code here
   Node* tmp = node->next;
   node->data = tmp->data;
   node->next = tmp->next;
   tmp->next = NULL;
   return
}

