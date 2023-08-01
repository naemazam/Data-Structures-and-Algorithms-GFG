/*
Given an expression string exp.
Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
For example, the program should print 'balanced'
for exp = “[()]{}{[()()]()}”
and 'not balanced' for exp = “[(])”
*/
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

string ParanthesisChecker(string str)
{
    stack <int> s;
    const int n = str.length();
    bool flag = true;
    for(int i = 0; i < n; i++)
    {
        if((str[i]=='(') || (str[i]=='{') || (str[i]=='['))
            s.push(str[i]);

        else if(s.empty() == false)
        {
            if(((s.top()=='(') && (str[i]==')')) || ((s.top()=='{') && (str[i]=='}')) || ((s.top()=='[') && (str[i]==']')))
                s.pop();
            else
            {
                flag = false;
                break;
            }
        }
        else
        {
            flag = false;
            break;
        }
    }
    if(flag &&s.empty())
        return "balanced";
    else
        return "not balanced";

}

int main(void)
{
    // added the two lines below
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    // For all the test cases
    for(int t=0; t<T; t++)
    {
        string str;

        string res = ParanthesisChecker(str);

        cout<< res <<"\n";
    }
    return 0;
}