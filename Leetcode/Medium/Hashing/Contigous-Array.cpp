/*
Given a binary array, find the maximum length of a contiguous subarray with equal number of 0 and 1.

Example 1:
Input: [0,1]
Output: 2
Explanation: [0, 1] is the longest contiguous subarray with equal number of 0 and 1.
Example 2:
Input: [0,1,0]
Output: 2
Explanation: [0, 1] (or [1, 0]) is a longest contiguous subarray with equal number of 0 and 1.

*/

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                nums[i]=-1;
            }
        }
        unordered_map<int, int> mp;
        int maxlen=0,currsum=0;
        for(int i=0;i<n;i++)
        {
            currsum+=nums[i];
            if(mp.find(currsum)!=mp.end())
            {
                maxlen = max(maxlen,(i-mp[currsum]));
            }
            if(currsum==0)
            {
                maxlen=i+1;
            }
            if(mp.find(currsum)==mp.end())
            {
                mp[currsum]=i;
            }
            
        }
        return maxlen;
        
    }
};
