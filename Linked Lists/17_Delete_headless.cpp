/*
Delete without head pointer
You are given a pointer/ reference to the node which is to be deleted from the linked list of N nodes.
The task is to delete the node. Pointer/ reference to head node is not given.
Note: No head reference is given to you.
*/



/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/

// This function should delete node from linked list. The function
// may assume that node exists in linked list and is not last node
// node: reference to the node which is to be deleted
void deleteNode(Node *node)
{
   // Your code here
   Node* tmp = node->next;
   node->data = tmp->data;
   node->next = tmp->next;
   tmp->next = NULL;
   return
}
