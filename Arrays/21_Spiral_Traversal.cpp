/*
Given a matrix mat[][] of size M*N. Traverse and print the matrix in spiral form.
*/

#include <iostream>
#include <algorithm>
using namespace std;

void SpiralTraversal(int **a , int m, int n)
{
    int up=0, right=n-1, down=m-1, left=0;
    int i,j;
    while(up<=down && left<=right )
    {
        for(i=up;i<=right;i++)
        {
            cout<<a[up][i]<<" ";
        }
        up++;
        for(i=up;i<=down;i++)
        {
            cout<<a[i][right]<<" ";
        }
        right--;
        if(up<=down)
        {
        for(i=right;i>=left;i--)
        {
            cout<<a[down][i]<<" ";
        }
        down--;
        }
        if(left<=right)
        {
        for(i=down;i>=up;i--)
        {
            cout<<a[i][left]<<" ";
        }
        left++;
        }
    }
    cout<<endl;
}


int main(void)
{
    int T, m, n;
    cin >> T;
    // For all the test cases
    for(int t=0; t<T; t++)
    {
        cin>> m >> n;
        // Take the array input rrom the use
        int **arr;
        arr = new int* [m];
        for(int i=0; i<m; i++)
            arr[i] = new int[n];
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                cin >> arr[i][j];

        SpiralTraversal(arr, m, n);

    }
    return 0;
}