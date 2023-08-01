/*
Implement a Queue using Linked List.
*/

void MyQueue:: push(int x)
{
        // Your Code
        QueueNode *tmp = new QueueNode(x);
        if(front == NULL)
        {
            front = rear = tmp;
            return;
        }
        rear->next = tmp;
        rear = tmp;
}

/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop()
{
        // Your Code
        if(front == NULL)
            return -1;
        int tmp = front->data;
        front = front->next;
        return tmp;
        
}
