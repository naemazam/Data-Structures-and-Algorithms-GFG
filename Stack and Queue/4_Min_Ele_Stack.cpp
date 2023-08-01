/*
You are given N elements and your task is to Implement a Stack in which you can get minimum element in O(1) time.
*/



/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

/*returns min element from stack*/
int _stack :: getMin()
{
   //Your code here
   if(s.empty())
        return -1;
    else
        return minEle;
}

/*returns poped element from stack*/
int _stack ::pop()
{
   //Your code here
   if(s.empty())
        return -1;
   else if(s.top() < minEle)
   {
       int y  = s.top();
       int res = minEle;
       minEle = 2*minEle - y;  
       s.pop();
       return res;
   }
   else 
   {
       int res = s.top();
       s.pop();
       return res;
   }
   
}

/*push element x into the stack*/
void _stack::push(int x)
{
   //Your code here
   if(s.empty())
   {
       s.push(x);
       minEle = x;
   }
   else
   {
        if(x >= minEle)
            s.push(x);
        else
        {
            s.push(2 * x - minEle);
            minEle = x;
        }
   }
   
}