/*
K-th element of two sorted Arrays
*/
#include <iostream>
#include<algorithm>
using namespace std;

int Merge(int L[], int R[], int n1, int n2, int x)
{
    
    int arr[n1+n2], i, j, k;
    
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = 0; // Initial index of merged subarray 
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arr[k] = L[i]; 
            i++; 
        } 
        else { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
    return arr[x-1];

}

int main(void)
{
    // added the two lines below
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, m, n, k;
    cin >> T;
    // For all the test cases
    for(int t=0; t<T; t++)
    {
        cin >> m >> n >> k;
        int arr1[m], arr2[n];
        // Take the array input rrom the user
        for(int i=0; i<m; i++)
            cin >> arr1[i];
        for(int i=0; i<n; i++)
            cin >> arr2[i];

        cout<<Merge(arr1, arr2, m, n, k)<<"\n";
    }
    return 0;
}