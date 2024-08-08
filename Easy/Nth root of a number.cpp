//simiar logic as to the squre root one. using binary search. but in this case high pointer is set to number divided by n as that's the maximum value a nth root can have.
// got the answer in first attempt as well

//link to the problem : https://www.geeksforgeeks.org/problems/find-nth-root-of-m5843/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-nth-root-of-m

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    int res = -1;
	    
	    int low =1, high = m/n;
	    int mid =0;
	    
	    if(m==1)
	    {
	        return 1;
	    }
	    
	    while(low<=high)
	    {
	       mid = low +(high - low)/2;
	       
	       if(pow(mid, n)==m)
	       {
	           return mid;
	       }
	       
	       else if(pow(mid, n)>m)
	       {
	           high = mid-1;
	       }
	       
	       else
	       {
	           low = mid+1;
	       }
	    }
	    
	    return res;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends