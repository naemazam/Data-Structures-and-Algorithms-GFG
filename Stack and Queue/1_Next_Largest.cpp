/*
Given an array A of size N having distinct elements,
the task is to find the next greater element for each element of the array in order of their appearance in the array.
If no such element exists, output -1
*/
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void nextLargest(int arr[], int n)
{
    stack <int> s;
    int res[n];
    for(int i = n-1; i >= 0; i--)
    {
        while(!s.empty() && arr[i] >= s.top())
	            s.pop();
	    res[i] = s.empty() ? -1 : s.top();
	    s.push(arr[i]);
	}

    for(int i = 0; i < n; i++)
	    cout << res[i] << " ";
	cout << endl;
    return;
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
        int arr[n];
        // Take the array input from the user
        for(int i=0; i<n; i++)
            cin >> arr[i];
        nextLargest(arr, n);
    }
    return 0;
}