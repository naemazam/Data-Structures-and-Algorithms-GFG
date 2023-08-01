/*
Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array.
It is giveExpected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
n that all array elements are distinct.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// Find K'th smallest element in an array
int main(void)
{
    int T, n, k;
    cin >> T;
    // For all the test cases
    for(int t=0; t<T; t++)
    {
        cin >> n;
        int arr[n];
        // Take the array input rrom the user
        for(int i=0; i<n; i++)
            cin >> arr[i];
        cin >> k;

        nth_element(arr, arr + k - 1, arr + n);

        cout<< arr[k-1]<<endl;
    }
    return 0;
}