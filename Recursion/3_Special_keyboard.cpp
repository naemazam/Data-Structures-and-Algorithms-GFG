/*
Imagine you have a special keyboard with the following keys:
Key 1:  Prints 'A' on screen
Key 2: (Ctrl-A): Select screen
Key 3: (Ctrl-C): Copy selection to buffer
Key 4: (Ctrl-V): Print buffer on screen appending it after what has already been printed.
If you can only press the keyboard for N times (with the above four keys),
write a program to produce maximum numbers of A's. That is to say, the input parameter is N (No. of keys that you can press),
the output is M (No. of As that you can produce).
*/

#include <iostream>
using namespace std;

int maxPrints(int n, int maxAsSolution[])
{
    if(n > 75) return -1;
    else if(n < 7) return n;
    else
    {
        int maxSoFar = 0, maxAsWithThis_i = 0, multiplier = 2;
        for(int i=n-3; i>=0; i--)
        {
            if (maxAsSolution[i] == -1)
                maxAsSolution[i] = maxPrints(i, maxAsSolution);
            maxAsWithThis_i = multiplier*maxAsSolution[i];
            if(maxAsWithThis_i > maxSoFar)
                maxSoFar = maxAsWithThis_i;
            multiplier +=1;
        }
        return maxSoFar;
    }
}

int main(void)
{
    int T, n, k;
    cin >> T;
    // For all the test cases
    for(int t=0; t<T; t++)
    {
        cin >> n;
        int maxAsSolution[n];
        for(int i=0; i<n; i++)
            maxAsSolution[i] = -1;
        cout<<  maxPrints(n, maxAsSolution) <<endl;
        for(int i=0; i<n; i++)
            maxAsSolution[i] = -1;

    }
    return 0;
}