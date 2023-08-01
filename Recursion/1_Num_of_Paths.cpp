/*
The problem is to count all the possible paths from top left to bottom right of a MxN matrix with the constraints that from each cell you can either move to right or down.
*/
#include <iostream>
using namespace std;

int numOfPaths(int m, int n)
{
    if(m==1 || n==1)
        return 1;
    return numOfPaths(m-1, n)+numOfPaths(m, n-1);
}

int main(void)
{
    int T, n, m;
    cin >> T;
    // For all the test cases
    for(int t=0; t<T; t++)
    {
        cin >> m >>n;
        int arr[n];

        int result = numOfPaths(m, n);

        cout<< result<<endl;
    }
    return 0;
}