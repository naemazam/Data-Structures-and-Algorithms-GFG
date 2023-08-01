/*
Given a sorted and rotated array A of N distinct elements which is rotated at some point,
and given an element K. The task is to find the index of the given element K in the array A.
*/
#include <iostream>
using namespace std;

int RotatedSearch(int a[], int n, int k)
{
    int idx = -1;
        int l = 0;
        int h = n - 1;
        while (l <= h)
        {
            int mid = (l + h) / 2;
            if (a[mid] == k)
            {
                idx = mid;
                break;
            }
            if (k > a[mid] && a[mid] <= a[h] && k > a[h])
                // wrap around high
                h = mid - 1;
            else if (k < a[mid] && a[mid] >= a[l] && k < a[l])
                // wrap around low
                l = mid + 1;
            else if (k < a[mid])
                // normal below mid
                h = mid - 1;
            else
                // normal above mid
                l = mid + 1;
        }
    return idx;
}

int main(void)
{
    // added the two lines below
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

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

        cout<<RotatedSearch(arr, n, k)<<"\n";

    }
    return 0;
}