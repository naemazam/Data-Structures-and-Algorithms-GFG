/*
Given two sorted arrays arr1[] and arr2[] in non-decreasing order with size n and m.
The task is to merge the two sorted arrays into one sorted array (in non-decreasing order).

Note: Expected time complexity is O((n+m) log(n+m)). DO NOT use extra space.
*/
#include<iostream>
#include<algorithm>
using namespace std;



int main(void)
{
    int T, M, N;
    cin >> T;
    // For all the test cases
    for(int t=0; t<T; t++)
    {
        cin >> M >> N;
        int array[M + N];
        // Take the array input rrom the user
        for(int i=0; i< M+N; i++)
            cin >> array[i];
        sort(array, array+M+N);

        for(int i=0; i< M+N; i++)
            cout<< array[i] <<" ";
        cout<<endl;
    }
    return 0;
}