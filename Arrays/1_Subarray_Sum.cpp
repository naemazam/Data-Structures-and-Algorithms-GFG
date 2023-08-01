// Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.
/* Input:
The first line of input contains an integer T denoting the number of test cases.
Then T test cases follow. Each test case consists of two lines.
The first line of each test case is N and S, where N is the size of array and S is the sum.
The second line of each test case contains N space separated integers denoting the array elements.*/
/* Output:
For each testcase, in a new line, print the starting
and ending positions(1 indexing) of first such occuring subarray from the left if sum equals to subarray, else print -1. */
#include<iostream>
using namespace std;

void SubArraySum(int array[], int N, int S)
{
    // logic
    int tmp;
    for(int i=0; i<N; i++)
    {
        tmp = 0;
        for(int j=i; j<N; j++)
        {
            tmp += array[j];
            //cout << "for i= "<< i+1 << "j=" << j+1 << "sum="<< tmp <<endl;
            if(tmp == S)
            {
                cout << i+1 << " " << j+1 <<endl;
                return;
            }
            if(tmp > S)
            {
                break;
            }
        }
    }
    if(tmp != S)
        cout << -1 << endl;
}

int main(void)
{
    int T, N, S;
    cin >> T;
    // For all the test cases
    for(int t=0; t<T; t++)
    {
        cin >> N >> S;
        int array[N];
        // Take the array input rrom the user
        for(int i=0; i<N; i++)
            cin >> array[i];

        SubArraySum(array, N, S);

    }
    return 0;
}