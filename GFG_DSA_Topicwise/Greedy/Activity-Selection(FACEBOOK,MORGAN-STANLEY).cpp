/*
Given N activities with their start and finish day given in array start[ ] and end[ ]. Select the maximum number of activities that can be performed by 
a single person, assuming that a person can only work on a single activity at a given day.
Note : Duration of the activity includes both starting and ending day.

Example 1:

Input:
N = 2
start[] = {2, 1}
end[] = {2, 2}
Output: 
1
Explanation:
A person can perform only one of the
given activities.
Example 2:

Input:
N = 4
start[] = {1, 3, 2, 5}
end[] = {2, 4, 3, 6}
Output: 
3
Explanation:
A person can perform activities 1, 3
and 4.
Your Task :
You don't need to read input or print anything. Your task is to complete the function activityselection() which takes array start[ ], array end[ ] and 
integer N as input parameters and returns the maximum number of activities that can be done.

Expected Time Complexity : O(N * Log(N))
Expected Auxilliary Space : O(1)
*/

class Solution{
    public:
    
    
    static bool comp(pair<int,int> a,pair<int,int> b)
    {
        if(a.second==b.second) return a.first<b.first;
        
        return a.second<b.second;
    }
    
    int activitySelection(vector<int> start, vector<int> end, int n){
        // Your code here
        vector<pair<int,int>> arr;
        for(int i=0;i<n;i++)
        {
            arr.push_back({start[i],end[i]});
        }
        sort(arr.begin(),arr.end(),comp);
        int count = 1;
        //for(int i =0;i<n;i++) cout<<arr[i].first<<" "<<arr[i].second<<endl;
        int prevend = arr[0].second;
        for(int i=1;i<n;i++)
        {
            if(arr[i].first>prevend)
            {
                count++;
                prevend = arr[i].second;
            }
        }
        return count;
    }
};
