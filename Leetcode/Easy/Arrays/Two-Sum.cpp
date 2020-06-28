/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].


*/



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> res;
        int a=0;
        int b=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j = i+1;j<n;j++)
            {
                if((nums[i]+nums[j])==target)
                {
                    res.push_back(i);
                    res.push_back(j);
                    break;
                }
            }
        }
        return res;
        
    }
};
