/*
Implement a Stack using two queues q1 and q2.
*/


/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

/* The method push to push element into the stack */
void QueueStack :: push(int x)
{
        // Your Code
        q1.push(x);
        return;
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
        // Your Code
        if(q1.empty() && q2.empty())
            return -1;
        int n = q1.size();
        while(--n)
        {
            int tmp = q1.front();
            q1.pop();
            q1.push(tmp);
        }
        int res  = q1.front();
        q1.pop();
        return res;
}
