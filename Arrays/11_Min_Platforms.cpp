/*
Given arrival and departure times of all trains that reach a railway station.
Your task is to find the minimum number of platforms required for the railway station
so that no train waits.

Note: Consider that all the trains arrive on the same day and leave on the same day.
Also, arrival and departure times will not be same for a train,
but we can have arrival time of one train equal to departure of the other.
In such cases, we need different platforms,
i.e at any given instance of time, same platform can not be used for
both departure of a train and arrival of another.

Input:
The first line of input contains T, the number of test cases.
For each test case, first line will contain an integer N, the number of trains.
Next two lines will consist of N space separated time intervals denoting arrival and
departure times respectively.
Note: Time intervals are in the 24-hour format(hhmm),  of the for HHMM ,
where the first two charcters represent hour (between 00 to 23 ) and
last two characters represent minutes (between 00 to 59).

Output:
For each test case, print the minimum number of platforms required for the trains to arrive and depart safely.

Constraints:
1 <= T <= 100
1 <= N <= 1000
1 <= A[i] < D[i] <= 2359
*/

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void MinPlatforms(int arr[], int dep[], int n)
{
    int i=0, j=0, count=0, platforms=0;
    sort(arr,arr+n),sort(dep,dep+1);
    while(i<n && j<n)
    {
        if(arr[i] <= dep[j])
            count++,i++;
        else if(arr[i] > dep[j])
            count--,j++;
        platforms = max(platforms, count);
    }
    cout<<platforms<<endl;
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
        int arr[N], dep[N];
        // Take the array input rrom the user
        for(int i=0; i<N; i++)
            cin>> arr[i];
        // Take the array input rrom the user
        for(int i=0; i<N; i++)
            cin>> dep[i];
        MinPlatforms(arr, dep, N);

    }
    return 0;
}