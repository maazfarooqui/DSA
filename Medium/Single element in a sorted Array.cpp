// // I used a very simple approach since the array is sorted and I could not use extra space other than constant. We start iterating from 1 to n-2 and compare the ith element to it's previous and next elements. if both elements are different, it means this is the unique element and we return it. However this condidtion ignores the case where the first and last element may be unique and also this condition is only valid if and only if the size of array is atleast 3. so to handle the case where first and last element may be unique we set a if condition first and check if array size is atleast two and then simple check if the first and last elements are different to their adjacent elements, and if so we return them. 
// the final case is when the array size is just one element so we return it

// link to the problem: https://leetcode.com/problems/single-element-in-a-sorted-array/description/

#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size();

        if(n==1)
        {
            return nums[0];
        }

        if (n > 1) {
            if (nums[0] != nums[1]) {
                return nums[0];
            }

            if (nums[n - 1] != nums[n - 2]) {
                return nums[n - 1];
            }
        }

        if (n > 2) {

            for (int i = 1; i < n - 1; i++) {
                if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1]) {
                    return nums[i];
                }
            }
        }

        return 0;
    }
};