/*
There is one meeting room in a firm. There are N meetings in the form of (S[i], F[i]) where S[i] is start time of meeting i and F[i] is finish time of meeting i.
What is the maximum number of meetings that can be accommodated in the meeting room when only one meeting can be held in the meeting room at a particular time? 
Also note start time of one chosen meeting can't be equal to the end time of the other chosen meeting.


Example 1:

Input:
N = 6
S[] = {1,3,0,5,8,5}
F[] = {2,4,6,7,9,9}
Output: 
4
Explanation:
Four meetings can be held with
given start and end timings.
Example 2:

Input:
N = 8
S[] = {75250, 50074, 43659, 8931, 11273,
27545, 50879, 77924}
F[] = {112960, 114515, 81825, 93424, 54316,
35533, 73383, 160252}
Output: 
3
Explanation:
Only three meetings can be held
with given start and end timings.

Your Task :
You don't need to read inputs or print anything. Complete the function maxMeetings() that recieves array S[ ] and F[ ] along with their size N as input 
parameters and returns the maximum number of meetings that can be held in the meeting room.


Expected Time Complexity : O(N*LogN)
Expected Auxilliary Space : O(N)
*/

class Solution{
    public:
    
    
        static bool comp(pair<int,int> a,pair<int,int>b)
        {
            if(a.second==b.second) return a.first<b.first;
            
            return a.second<b.second;
        }
    
        int maxMeetings(int start[], int end[], int n) {
        // Your code here
        vector<pair<int,int>> arr;
        for(int i=0;i<n;i++) arr.push_back({start[i],end[i]});
        sort(arr.begin(),arr.end(),comp);
        int prevend = arr[0].second,count = 1;
        for(int i=1;i<n;i++)
        {
            if(arr[i].first>prevend)
            {
                prevend = arr[i].second;
                count++;
            }
        }
        return count;
    }
};
