//the approach is simple floor is the greatest elemnent just less than or equal to x. ceil is the smallest element  greater than or equal to x. we initialise 2 variables flr and cl to minimun possible value and maximum possibles values respectively. then we iterate the array. If we find a new element less than or equal to x we update floor to maximum of (flr, arr[i]) as floor is the GREATEST element <= x. We do the same for Ceil but using a min function instead. 
//after the loop we check for two condition : if the does not exist any ceil or floor for x in the array. we do so by checking if cl and flr were ever updated in the array or not. if not we change their value to -1.

//link to the problem  : https://www.geeksforgeeks.org/problems/ceil-the-floor2802/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=ceil-the-floor

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr)
    {

        int n = arr.size();
        int flr = INT_MIN, cl = INT_MAX;

        

        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= x)
            {
                flr = max(flr, arr[i]);
            }

            if (arr[i] >= x)
            {
                cl = min(cl, arr[i]);
            }
        }

        if (flr == INT_MIN)
        {
            flr = -1;
        }

        if (cl == INT_MAX)
        {
            cl = -1;
        }

        vector<int> res;

        res.push_back(flr);
        res.push_back(cl);

        return res;
    }
};



int main()
{
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--)
    {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends