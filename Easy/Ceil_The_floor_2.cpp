#include <bits/stdc++.h>
using namespace std;

//the same question as before just this time i had to return a pair.

//link to the problem : https://www.naukri.com/code360/problems/ceiling-in-a-sorted-array_1825401?leftPanelTabValue=PROBLEM

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.

	int cl =INT_MAX, flr = -1;

	for(int i=0; i<n; i++)
	{
		if(a[i]<=x)
		{
			if(flr<a[i])
			{
				flr = a[i];
			}
		}

		if(a[i]>=x)
		{
			if(cl>a[i])
			{
				cl = a[i];
			}
		}


		
	}
	if(cl==INT_MAX)
		{
			cl =-1;
		}

	pair<int, int> pr = {flr, cl};

	return pr;
}