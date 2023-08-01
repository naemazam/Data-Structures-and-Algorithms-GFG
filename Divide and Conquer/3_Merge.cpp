/*
Given 2 sorted arrays A and B of size N each.
Print sum of middle elements of the array obtained after merging the given arrays.
*/
#include <iostream>
#include<algorithm>
using namespace std;

int Merge(int x[], int y[], int n)
{
    int i= n-1, j=0;
    while(x[i] > y[j] && i>=0 && j<n)
    {
        swap(x[i], y[j]);
        i-=1, j+=1;
    }
    sort(x, x+n), sort(y, y+n);
    // cout<<"New X : ";
    // for(int i = 0; i < n; i++)
    //     cout << x[i] <<" ";
    // cout<<endl<<"New Y : ";
    // for(int i = 0; i < n; i++)
    //     cout << y[i] <<" ";


    return x[n-1] + y[0];

}

int main(void)
{
    // added the two lines below
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, n;
    cin >> T;
    // For all the test cases
    for(int t=0; t<T; t++)
    {
        cin >> n;
        int arr1[n], arr2[n];
        // Take the array input rrom the user
        for(int i=0; i<n; i++)
            cin >> arr1[i];
        for(int i=0; i<n; i++)
            cin >> arr2[i];

        cout<<Merge(arr1, arr2, n)<<"\n";
    }
    return 0;
}