//Problem: https://practice.geeksforgeeks.org/problems/minimum-swaps/1#


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    vector<pair<int,int>> arrPos;
	    for(int i=0;i<nums.size();i++)
	    {
	        arrPos.push_back({nums[i],i});
	    }
	    sort(arrPos.begin(), arrPos.end());
	    
	    int n = nums.size();
	    vector<bool> visited(n,false);
	    int res = 0;
	    for(int i = 0;i<n;i++)
	    {
	        if(!visited[i] && arrPos[i].second != i )
	        {
	            int cycle_size = 0;
	            int j = i;
	            while(!visited[j])
	            {
	                visited[j] = true;
	                j = arrPos[j].second;
	                cycle_size++;
	            }
	            if(cycle_size>0) res+=(cycle_size-1);
	        }
	    }
	    return res;
	}
};