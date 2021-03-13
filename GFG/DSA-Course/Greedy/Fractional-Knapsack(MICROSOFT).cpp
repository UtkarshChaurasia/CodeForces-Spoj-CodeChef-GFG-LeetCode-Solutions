/*
Given weights and values of N items, we need to put these items in a knapsack of capacity W to get the maximum total value in the knapsack.
Note: Unlike 0/1 knapsack, you are allowed to break the item. 

Example 1:

Input:
N = 3, W = 50
values[] = {60,100,120}
weight[] = {10,20,30}
Output:
240.00
Explanation:Total maximum value of item
we can have is 240.00 from the given
capacity of sack. 
Example 2:

Input:
N = 2, W = 50
values[] = {60,100}
weight[] = {10,20}
Output:
160.00
Explanation:
Total maximum value of item
we can have is 160.00 from the given
capacity of sack.
 

Your Task :
Complete the function fractionalKnapsack() that receives maximum capacity , array of structure/class and size n and returns a double value representing the 
maximum value in knapsack.
Note: The details of structure/class is defined in the comments above the given function.

Expected Time Complexity : O(NlogN)
Expected Auxilliary Space: O(1)

*/

class Solution
{
    public:
    
    static bool comp(pair<double,double> a, pair<double,double> b)
    {
        return((a.first/a.second)>(b.first/b.second));
    }
    
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        vector<pair<double,double>> vec;
        for(int i = 0;i<n;i++)
        {
            vec.push_back({arr[i].value,arr[i].weight});
        }
        sort(vec.begin(),vec.end(),comp);
        int currw = 0;
        double total=0;
        for(int i=0;i<n;i++)
        {
            if(currw+vec[i].second<=W)
            {
                total+=vec[i].first;
                currw+=vec[i].second;
            }
            else
            {
                double left = W-currw;
                total = total+1.00*vec[i].first*(1.00*left/vec[i].second);
                break;
            }
        }
        return total;
    }
        
};
