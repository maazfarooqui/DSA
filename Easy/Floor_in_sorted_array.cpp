//very similar approach to the first problem. but this time we should return the index and not the value itself. declare a flr variable to find floor and ind to keep index of it. keep iterating and updating until(if) found. if not found return the value to what it was initialised with (-1).

//also static_cast<int>(ind); is a cool way of typecasting a variable.

// link to problem : https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1?track=DSASP-Searching&amp%253BbatchId=154&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=floor-in-a-sorted-array


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> &v, long long n, long long x) {

        // Your code here
        
        long long flr = -1;
        int ind=-1;
        
        for(int i=0; i<n; i++)
        {
            if(v[i]<=x)
            {
               if(flr<v[i])
               {
                   flr = v[i];
                   ind = i;
               }
                
            }
        }
        
       
        
        return static_cast<int>(ind); 
    }
};


//{ Driver Code Starts.

int main() {

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long x;
        cin >> x;

        vector<long long> v;

        for (long long i = 0; i < n; i++) {
            long long temp;
            cin >> temp;
            v.push_back(temp);
        }
        Solution obj;
        cout << obj.findFloor(v, n, x) << endl;
    }

    return 0;
}
// } Driver Code Ends