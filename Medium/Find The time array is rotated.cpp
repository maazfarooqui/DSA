//we take advantage of the fact that this array is sorted in ascending order. so the min element should have been at the 0th index. we find the min element and see how far it has travelled and then return the index of the min element;

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
       
       int minn = INT_MAX;
       int ind =0;
       
       for(int i=0; i<arr.size(); i++)
       {
           if(arr[i]<minn)
           {
               minn= arr[i];
               ind = i;
           }
       }
       
       return ind;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
    }
}
// } Driver Code Ends