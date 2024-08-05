

#include <bits/stdc++.h>
using namespace std;




class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        
        int n = arr.size();
        int flr=INT_MIN, cl = INT_MAX;
        
        for(int i=0; i<n; i++)
        {
            if(arr[i]<=x)
            {
                flr = max(flr, arr[i]);
            }
            
            if(arr[i]>=x)
            {
                cl = min(cl, arr[i]);
            }
        }
        
       
        if(flr==INT_MIN)
        {
            flr=-1;
        }
        
        if(cl==INT_MAX)
        {
            cl = -1;
        }
        
        vector<int> res;
        
        res.push_back(flr);
        res.push_back(cl);
        
        return res;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends