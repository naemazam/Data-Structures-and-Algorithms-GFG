/*
Given a sorted array of positive integers.
Your task is to rearrange  the array elements alternatively
i.e first element should be max value, second should be min value, third should be second max,
fourth should be second min and so on...
Note: O(1) extra space is allowed. Also, try to modify the input array as required.

Constraints:
1 <=T<= 100
1 <=N<= 10^7
1 <=arr[i]<= 10^7
*/

#include<iostream>
#include<climits>
using namespace std;

void RearrangeArrayAlt(long long int arr[], long long int n)
{
    long long int max_ind = n-1, min_ind = 0, count = 0;

    while(min_ind <= max_ind)
    {
        if(count%2 == 0)
        {
            arr[count] += (arr[max_ind] % INT_MAX) * INT_MAX;
            count++, max_ind--;

        }
        else
        {
            arr[count] += (arr[min_ind] % INT_MAX) * INT_MAX;
            count++, min_ind++;
        }

    }
    for(long long int i=0; i<n; i++)
        cout<< arr[i]/INT_MAX <<" ";
    cout<<endl;
}


int main(void)
{
    long long int T, N;
    cin >> T;
    // For all the test cases
    for(int t=0; t<T; t++)
    {
        cin >> N;
        long long int array[N];
        // Take the array input rrom the user
        for(long long int i=0; i<N; i++)
            cin >> array[i];

        RearrangeArrayAlt(array, N);
    }
    return 0;
}