/*
Given two arrays X and Y of positive long integers,
find number of pairs such that x^y > y^x (raised to power of)
where x is an element from X and y is an element from Y.
*/

#include<iostream>
#include<algorithm> // std::sort
using namespace std;

long int counter(long int x, long int Y[], long int n, long int NoOfY[])
{ 
    // If x is 0, then there cannot be any value in Y such that 
    // x^Y[i] > Y[i]^x
    if (x == 0) return 0; 
  
    // If x is 1, then the number of pais is equal to number of 
    // zeroes in Y[] 
    if (x == 1) return NoOfY[0]; 
  
    // Find number of elements in Y[] with values greater than x 
    // upper_bound() gets address of first greater element in Y[0..n-1] 
    long int* idx = upper_bound(Y, Y + n, x);
    long int ans = (Y + n) - idx;

    // If we have reached here, then x must be greater than 1, 
    // increase number of pairs for y=0 and y=1
    ans += (NoOfY[0] + NoOfY[1]); 
  
    // Decrease number of pairs for x=2 and (y=4 or y=3) 
    if (x == 2)  ans -= (NoOfY[3] + NoOfY[4]); 
  
    // Increase number of pairs for x=3 and y=2 
    if (x == 3)  ans += NoOfY[2]; 

    return ans; 
}

void NumPairs(long int X[], long int Y[], long int m, long int n)
{
    sort(Y, Y+n);
    long int NoOfY[5] = {0};
    for (long int i = 0; i < n; i++)
        if (Y[i] < 5) 
            NoOfY[Y[i]]++;
        else
            break;
    long int count = 0;
    for(long int i=0; i<m; i++)
        count += counter(X[i], Y, n, NoOfY);
    cout<< count <<endl;
}


int main(void)
{
    long int T, m, n;
    cin >> T;
    // For all the test cases
    for(long int t=0; t<T; t++)
    {
        cin >>  m >> n;
        long int X[m], Y[n];
        // Take the array input rrom the user
        for(long int i=0; i<m; i++)
            cin >> X[i];

        for(long int i=0; i<n; i++)
            cin >> Y[i];

        NumPairs(X, Y, m, n);

    }
    return 0;
}