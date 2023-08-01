/*
Given an array A of N positive numbers. The task is
to find the position where equilibrium first occurs in the array.
Equilibrium position in an array is a position such that the sum of elements
before it is equal to the sum of elements after it.
Constraints:
1 <= T <= 100
1 <= N <= 106
1 <= Ai <= 108
*/

#include<iostream>
using namespace std;

void FindEquillibrium(long int arr[], long int n)
{
    int sum=0, lsum=0, rsum=0;
    for(long int i=0; i<n; i++)
            sum+=arr[i];
    rsum = sum;
    for(long int i=0; i<n; i++)
    {
        rsum -= arr[i];
        if(lsum == rsum)
        {
            cout<<i+1<<endl;
            return;
        }
        lsum += arr[i];
    }
    cout<<-1<<endl;
}
int main(void)
{
    long int T, N;
    cin >> T;
    // For all the test cases
    for(long int t=0; t<T; t++)
    {
        cin >> N;
        long int array[N];
        // Take the array input rrom the user
        for(long int i=0; i<N; i++)
            cin >> array[i];

        FindEquillibrium(array, N);
    }
    return 0;
}