//Ok so all the medium problems I solved till now which seemed so easy to me actually had a catch they required you to have time complexity of logn instead I used i for loop and the complexity became n. 

//for this problem I had to look for help and did. this problem can be solved using binary search. We initialise two pointers low and high and equate mid to be high-low/2. at each iteration we check of the current element(mid) is peak. if it is we return it. else we see if the previous element was smaller than the current element. this means the peak will definitely be after mid. if the current element is only greater than the next element peak will be before this. However to handle other cases (where two elements might be equal, evene though it is not mentioned in this problem.) we use a simple else, so as to not go in infinte loops. 

//also to hande the case where first or last element can be peak we test theme separately beforehand and then reduce the size of binary search in the array.

//link to the problem : https://leetcode.com/problems/find-peak-element/description/


#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int n = nums.size();
        int low =1, high = n-2;
        int mid=0;

        if(n==1) return 0;

       
        
            if(nums[1]<nums[0])
            {
                return 0;
            }

            else if(nums[n-1]>nums[n-2])
            {
                return n-1;
            }
        

        while(low<=high)
        {
            mid = low+ (high-low)/2;
            if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1])
            {
                return mid;
            }

            else if(nums[mid-1]<nums[mid])
            {
                low = mid+1;
            }

            else
            {
                high = mid-1;
            }
        }

        return -1;
        
    }
};