/*
Find Pivot index
Given an array of integers nums, write a method that returns the "pivot" index of this array.

We define the pivot index as the index where the sum of the numbers to the left of the index is equal to the sum of the numbers to the right of the index.

If no such index exists, we should return -1. If there are multiple pivot indexes, you should return the left-most pivot index.
The length of nums will be in the range [0, 10000].
Each element nums[i] will be an integer in the range [-1000, 1000].
*/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         if(nums.size() == 0)
        {
            return -1;
        }
        if(nums.size() == 1)
        {
            return 0;
        }
        
        int sumL = nums[0];
        int size = nums.size();
        for(int i = 1; i < size ; i++)
        {
            int sumR = 0;
            for(int j = i+1; j < size; j++)
            {
                sumR += nums[j];
            }
            if(sumL == sumR)
            {
                return i;
            }
            sumL += nums[i];
        }
        return -1;
    }
};