/*
Geeks for Geeks Problem Solution Template Cpp
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void function_name(int arr[], int n)
{

}

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

        function_name();

        cout<< arr[k-1]<<endl;
    }
    return 0;
}