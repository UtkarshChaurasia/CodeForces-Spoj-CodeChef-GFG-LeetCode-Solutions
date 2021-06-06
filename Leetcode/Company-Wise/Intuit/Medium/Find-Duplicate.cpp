//PROBLEM: https://leetcode.com/problems/find-the-duplicate-number/



// This sol is used when there is a constraint that array cannot be modified
// Uses Tortoise Hare Algorithm
// If we can modify array then we can visit every element and consider it as index and make value negative
// at that index and if ever wr find already neg value that would be our ans. Complexity will be same for both sols.

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        if(nums.size()>1)
        {
            int slow = nums[0];
            int fast = nums[nums[0]];
            while(slow!=fast)
            {
                slow = nums[slow];
                fast = nums[nums[fast]];
            }
            fast = 0;
            while(slow!=fast)
            {
                slow = nums[slow];
                fast = nums[fast];
            }
            return slow;
        }
        return -1;
        
    }
};