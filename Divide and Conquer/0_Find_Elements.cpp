/*
Given a sorted array A, size N, of integers;
every element appears twice except for one. Find that element that appears once in array.
*/
#include <iostream>
using namespace std;

int findTheOne(int arr[], int n)
{
    for(int i=0; i<n-1; i+=2)
    {
        if(arr[i]!= arr[i+1] && i < n-1)
            return arr[i];
        else if(i == n-1)
            return arr[i];
    }


}

int main(void)
{
    int T, n;
    cin >> T;
    // For all the test cases
    for(int t=0; t<T; t++)
    {
        cin >> n;
        int arr[n];
        // Take the array input from the user
        for(int i=0; i<n; i++)
            cin >> arr[i];

        cout<<findTheOne(arr, n)<<endl;
    }
    return 0;
}