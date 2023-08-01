/*
Given an array of positive long integers. The task is to find inversion count of array.

Inversion Count : For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then inversion count is 0. If array is sorted in reverse order that inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
*/

#include<iostream>
using namespace std;

long int _mergeSort(long int arr[], long int temp[], long int left, long int right);
long int merge(long int arr[], long int temp[], long int left, long int mid, long int right);

/* This function sorts the input array and returns the
number of inversions in the array */
void mergeSort(long int arr[], long int array_size)
{ 
    long int temp[array_size]; 
    cout<< _mergeSort(arr, temp, 0, array_size - 1) <<endl;
}

/* An auxiliary recursive function that sorts the input array and
returns the number of inversions in the array. */
long int _mergeSort(long int arr[], long int temp[], long int left, long int right)
{ 
    long int mid, inv_count = 0;
    if (right > left) {
        /* Divide the array long into two parts and  
        call _mergeSortAndCountInv()
        for each of the parts */
        mid = (right + left) / 2; 

        /* Inversion count will be sum of  
        inversions in left-part, right-part  
        and number of inversions in merging */
        inv_count += _mergeSort(arr, temp, left, mid); 
        inv_count += _mergeSort(arr, temp, mid + 1, right);

        /*Merge the two parts*/
        inv_count += merge(arr, temp, left, mid + 1, right); 
    } 
    return inv_count; 
} 
  
/* This funt merges two sorted arrays  
and returns inversion count in the arrays.*/
long int merge(long int arr[], long int temp[], long int left, 
          long int mid, long int right) 
{ 
    long int i, j, k; 
    long int inv_count = 0; 
  
    i = left; /* i is index for left subarray*/
    j = mid; /* j is index for right subarray*/
    k = left; /* k is index for resultant merged subarray*/
    while ((i <= mid - 1) && (j <= right)) { 
        if (arr[i] <= arr[j]) { 
            temp[k++] = arr[i++]; 
        } 
        else {
            temp[k++] = arr[j++]; 
  
            /* this is tricky -- see above  
            explanation/diagram for merge()*/
            inv_count = inv_count + (mid - i);
        } 
    } 
  
    /* Copy the remaining elements of left subarray  
(if there are any) to temp*/
    while (i <= mid - 1) 
        temp[k++] = arr[i++]; 
  
    /* Copy the remaining elements of right subarray  
(if there are any) to temp*/
    while (j <= right) 
        temp[k++] = arr[j++]; 
  
    /*Copy back the merged elements to original array*/
    for (i = left; i <= right; i++) 
        arr[i] = temp[i]; 
  
    return inv_count;
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

        mergeSort(array, N);

    }
    return 0;
}