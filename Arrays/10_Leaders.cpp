/*
Given an array of positive integers.
Your task is to find the leaders in the array.
Note: An element of array is leader if it is greater than or equal to all the elements to its right side.
Also, the rightmost element is always a leader.
*/

#include<iostream>
#include<vector>
using namespace std;

void FindLeader(int arr[], int n)
{
    int max=0, count=0;
    vector<int> leaders;
    for(int i=n-1; i>=0; i--)
    {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i] >= max)
        {
            leaders.push_back(arr[i]);
        }
    }
    leaders.shrink_to_fit();
    for(int i=leaders.size()-1; i>=0; i--)
        cout<<leaders[i]<<" ";
    cout<<endl;
    return;
}
int main(void)
{
    int T, N;
    cin >> T;
    // For all the test cases
    for(int t=0; t<T; t++)
    {
        cin >> N;
        int array[N];
        // Take the array input rrom the user
        for(int i=0; i<N; i++)
            cin >> array[i];

        FindLeader(array, N);

    }
    return 0;
}