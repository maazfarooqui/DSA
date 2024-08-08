// //this was my first attempt at solving the problem. My approach was to intialise two variable first and second to -1(in case the element does not exist). Iterate the array and if the first occurance is not found, only then check if the current element is equal to target if so, update the first and also the second element(in case it only occurs once, both first and last occurance will be same). now we iterate further but this time to only check for the appearance of the element again to update the second variable.
// the time complexity was slightly high and leetcode showed me about ~40% better than rest

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int n = nums.size();
        int first=-1, second=-1;
        for(int i=0; i<n; i++)
        {
            if(first==-1)
            {
                 if(nums[i]==target)
            {
                first = i;
                second = i;
            }
            }


            if(nums[i]==target)
            {
                second = i;
            }
           

            

        }

        vector <int> res;

        res.push_back(first);
        res.push_back(second);

        return res;
        

       

        
    }
};