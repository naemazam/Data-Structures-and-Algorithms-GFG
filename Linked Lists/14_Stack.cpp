/*
You have a linked list and you have to implement the functionalities push and pop of stack.
*/

void MyStack ::push(int x) {
    // Your Code
    StackNode *tmp = new StackNode(x);
    if(top == NULL)
    {
        top = tmp;
        return;
    }
    tmp->next = top;
    top = tmp;
    return;
}

/* The method pop which return the element
  poped out of the stack*/
int MyStack ::pop() {
    // Your Code
    if(top == NULL)
        return -1;
    int tmp = top->data;
    top = top->next;
    return tmp;
}