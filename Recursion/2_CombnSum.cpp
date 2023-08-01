/*
Given an array of integers A and a sum B, find all unique combinations in A where the sum is equal to B.

ach number in A may only be used once in the combination.

Note:
   All numbers will be positive integers.
   Elements in a combination (a1, a2, … , ak) must be in non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak).
   The combinations themselves must be sorted in ascending order.
   If there is no combination possible the print "Empty" (without qoutes).
Example,
Given A = 10,1,2,7,6,1,5 and B(sum) 8,

A solution set is:

[1, 7]
[1, 2, 5]
[2, 6]
[1, 1, 6]
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void sol(vector<vector<int>>& ans,vector<int>& res,vector<int> num,int i ,int sum,int n)
{    
    if(sum<0)
     return ;
    if(sum==0)
    {
        ans.push_back(res);
        return ;
    }
    if(i>=n)return ;
    res.push_back(num[i]);
    sol(ans,res,num,i+1,sum-num[i],n);
    res.pop_back();
    while(i<n-1 && num[i]==num[i+1])i++;
    sol(ans,res,num,i+1,sum,n);
}
int main()
{
	int t,n,i,sum;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    vector<int> v(n);
	    for(i=0;i<n;i++)cin>>v[i];
	    cin>>sum;
	    sort(v.begin(),v.end());
	    vector<vector<int> > ans;
	    vector<int> res;
	   sol(ans,res,v,0,sum,n);
	   for(i=0;i<ans.size();i++)
	   {   cout<<"(";
	       for(int j=0;j<ans[i].size();j++)
	        {
	            if(j!=ans[i].size()-1)
	               cout<<ans[i][j]<<" ";
	            else 
	             cout<<ans[i][j];
	         }
	        cout<<")";

	   }
	   if(ans.size()==0)cout<<"Empty";
	   cout<<endl;
	   
	}
	return 0;
}