//these problems belong to the solution of binary search, but somehow a simple for loop is enough to solve them.

//link to the problem : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int minn=INT_MAX;
        for(int i =0;i<nums.size(); i++)
        {
            if(nums[i]<minn)
            {
                minn = nums[i];
            }
        }

        return minn;
        
    }
};