/*
Given an input stream of N integers. The task is to insert these numbers into a new stream and find the median of the stream formed by each insertion of X to the new stream.

Example 1:

Input:
N = 4
X[] = 5,15,1,3
Output:
5
10
5
4
Explanation:Flow in stream : 5, 15, 1, 3 
5 goes to stream --> median 5 (5) 
15 goes to stream --> median 10 (5,15) 
1 goes to stream --> median 5 (5,15,1) 
3 goes to stream --> median 4 (5,15,1 3) 
 

Example 2:

Input:
N = 3
X[] = 5,10,15
Output:
5
7.5
10
Explanation:Flow in stream : 5, 10, 15
5 goes to stream --> median 5 (5) 
10 goes to stream --> median 7.5 (5,10) 
15 goes to stream --> median 10 (5,10,15) 
Your Task:
You are required to complete 3 methods insertHeap() which takes 1 argument, balanceHeaps() and getMedian() and returns the current median.
Expected Time Complexity : O(nlogn)
Expected Auxilliary Space : O(n)
*/

class Solution{
    public:
    // Function to insert heap
    double median;
    priority_queue<int> max;
    priority_queue<int, vector<int>, greater<int>> min;
    void insertHeap(int &x)
    {
        if(max.empty()) max.push(x);
        else if(x>max.top()) min.push(x);
        else if(min.empty())
        {
            min.push(max.top());
            max.pop();
            max.push(x);
        }
        else max.push(x);
        balanceHeaps();
    }
    
    // Function to balance heaps
    void balanceHeaps()
    {
        if(abs(max.size()-min.size())>1)
        {
            if(max.size()>min.size())
            {
                min.push(max.top());
                max.pop();
            }
            else
            {
                max.push(min.top());
                min.pop();
            }
        }
    }
    
    // Function to return getMedian
    double getMedian()
    {
        if((max.size()+min.size())%2==0)
        {
            median = (max.top()+min.top());
            median/=2;
        }
        else
        {
            if(min.empty()) median = max.top();
            else if(min.size()<max.size()) median = max.top();
            else median = min.top();
        }
        return median;
    }
};
