/*
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.

Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].

Example 2:

Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
*/


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        int sum;
        int n = nums.size();
        sum = nums[0];
        res.push_back(sum);
        for(int i=1;i<n;i++)
        {
            sum = sum+nums[i];
            res.push_back(sum);
            
        }
        return res;
    }
};
