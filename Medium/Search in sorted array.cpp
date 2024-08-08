// I was suprised why the problem was this simple. EVen though the problem statement and description made it more complicated than It was. It had a pretty straighforward solution. and guess what, my complexity was better than 100% of the users in first attempt 😎

//link to the problem: https://leetcode.com/problems/search-in-rotated-sorted-array/description/


#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {

        int res=-1;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==target)
            {
                res = i;
                return res;
            }
        }

        return res;
        
    }
};