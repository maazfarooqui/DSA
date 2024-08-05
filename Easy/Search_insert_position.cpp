#include <bits/stdc++.h>
using namespace std;

//we take advantage of the fact that the array is sorted 

//I took a slightly complicated approach instead of using binary search. I iterated the array and return the index if element is found. if not, I checked where the element will be placed by seeing if the current element is smaller and the next element is bigger than my target element. 

// finally I used two more if blocks to test the condition where the elements might be the greated or the smallest and be placed first or last.

//link to the problem : https://leetcode.com/problems/search-insert-position/


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {


        int n = nums.size();


        for(int i=0; i<n; i++)
        {
            if(nums[i]==target)
            {
                return i;
            }

            if(i<n-1)
            {
                
            if(nums[i]<target && nums[i+1]>target)
            {
                return i+1;
            }
            }
        }

        if(nums[0]>target)
        {
            return 0;
        }

        if(nums[n-1]<target)
        {
            return n;
        }

        return 0;
        
    }


};

