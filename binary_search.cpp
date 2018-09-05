/*
Given a sorted (in ascending order) integer array nums of n elements and a target value, write a function to search target in nums. If target exists, then return its index, otherwise return -1.


Example 1:

Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4

Example 2:

Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1
 

Note:

You may assume that all elements in nums are unique.
n will be in the range [1, 10000].
The value of each element in nums will be in the range [-9999, 9999].
*/

static const auto _____ = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int l = 0;
        int r = nums.size() -1;
        
        while(l <= r)
        {
            int m = (l+r)/2;
        	if(nums[m] == target)
        		return m;
        	else if(nums[m] < target)
        		l = m +1;
        	else
        		r = m-1;
        }
    return -1;
	}
};
