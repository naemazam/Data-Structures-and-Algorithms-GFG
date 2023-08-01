/*
Given an array arr of N integers.
Find the contiguous sub-array with maximum sum.

Input:
The first line of input contains an integer T denoting the number of test cases.
The description of T test cases follows. The first line of each test case contains a single integer N denoting the size of array.
The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:
Print the maximum sum of the contiguous sub-array in a separate line for each test case.
*/

#include<iostream>
#include<algorithm>
using namespace std;

// kadane Algorithm
void MaxSubArraySum(int arr[], int n)
{
    // logic
    int max_s, max_e;
    max_s = max_e = arr[0];
    for(int i=1; i<n; i++)
    {
        max_e = max(arr[i], max_e+arr[i]);
        max_s = max(max_e, max_s);
    }
    cout << max_s << endl;
}

int main(void)
{
    int T, N, S;
    cin >> T;
    // For all the test cases
    for(int t=0; t<T; t++)
    {
        cin >> N ;
        int array[N];
        // Take the array input rrom the user
        for(int i=0; i<N; i++)
            cin >> array[i];

        MaxSubArraySum(array, N);

    }
    return 0;
}