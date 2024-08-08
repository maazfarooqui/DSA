//I tried a different approach to it. instead of using a single for loop I used two for loops:- the former for finding the first occurance of the element and updating "one"  (and also updating the "two" in case the element occurs only once ). then the second for loop for finding if the element occurs more than once and finding it's last occurance. this code was better than ~100% of the submissions on lc.

// link to the problem:  https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int n = nums.size();
        int one=-1, two=-1;

        
        for(int i=0; i<n; i++)
        {
            if(nums[i]==target)
            {
                one = i;
                two = i;
                break;
                
            }

        }
        
        for(int j=one+1; j<n; j++)
        {
            if(nums[j]==target)
            {
                two = j;
              
            }
        }

        vector <int> res;
        
        res.push_back(one);
        res.push_back(two);

        return res;
        

       

        
    }
};