//similar to part one, just had to return true or false depending on if the element is in the array or not

// link to the problem =: https://leetcode.com/problems/search-in-rotated-sorted-array-ii/


#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool search(vector<int>& nums, int target) {

 
      
        for(int i =0; i<nums.size(); i++)
        {
            if(nums[i]==target)
            {
                
                return true;
            }
        }


        return false;
        
    }
};