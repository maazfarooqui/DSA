/*I used Binary search cause it was fresh in my mind. with the exception of 1 and 2, whose roots would be 1(when floored). every number's root is atleast half of itself. 4=2, 9=3, 16=4 etc. so i set low =1 and high = n/2. then using binary check some condition: 
if mid*mid ==n we foud the number
else if mid*mid>n and mid-1*mid-1<n the number is a floating point number between the two and we have to return mid -1 

else if only mid *mid > n, reduce high
else reduce low
*/

//link to the problem : https://www.geeksforgeeks.org/problems/square-root/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=square-root

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    long long int floorSqrt(long long int n) {
        // Your code goes here
        
        long long low=1, high = n/2;
        long long mid =0;
        
        if(n==1 || n==2)
        {
            return 1;
        }
        
        
        while(low<=high)
        {
            mid = low + (high -low )/2;
            
            if(mid*mid == n)
            {
                return mid;
            }
            
            else if (mid*mid >n && (mid-1)*(mid-1)<n)
            {
               return mid-1;
            }
            
            else if(mid *mid > n )
            {
                high = mid -1;
            }
            
            else
            {
                low = mid+1;
            }
        }
        
        return mid;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends