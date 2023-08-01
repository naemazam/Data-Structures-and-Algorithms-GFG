/*
Given a list of non negative integers,
arrange them in such a manner that they form the largest number possible.
The result is going to be very large, hence return the result in the form of a string.
*/
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

bool compare(string x, string y)
{
    return (stoi(x+y) > stoi(y+x));
}

int main(void)
{
    int T, n;
    cin >> T;
    // For all the test cases
    for(int t=0; t<T; t++)
    {
        cin >> n;
        vector<string> v(n,"");
    	for(int i=0;i<n;i++){
    		cin>>v[i];
    	}
    	sort(v.begin(), v.end(),compare);;
        for(int i=0;i<n;i++)
        	cout<< v[i];
        cout<<endl;
    }
    return 0;
}