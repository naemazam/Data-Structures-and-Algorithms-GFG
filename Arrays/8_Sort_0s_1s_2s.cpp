/*
Given an array A of size N containing 0s, 1s, and 2s;
you need to sort the array in ascending order.
Constraints:
1 <= T <= 500
1 <= N <= 106
0 <= Ai <= 2
*/


#include<iostream>
#include<algorithm>
using namespace std;


int main(void)
{
    long int T, N;
    cin >> T;
    // For all the test cases
    for(long int t=0; t<T; t++)
    {
        cin >> N;
        int array[N];
        // Take the array input rrom the user
        for(long int i=0; i<N; i++)
            cin >> array[i];

        sort(array, array+N);

        for(long int i=0; i<N; i++)
            cout << array[i] <<" ";
        cout<<endl;

    }
    return 0;
}