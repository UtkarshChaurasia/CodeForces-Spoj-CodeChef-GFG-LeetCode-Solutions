/*
Given an integer array representing the heights of N buildings, the task is to delete N-2 buildings such that the water that can be trapped between the remaining two building is maximum.
Note: The total water trapped between two buildings is gap between them (number of buildings removed) multiplied by height of the smaller building.

Example 1:

Input:
N = 6
height[] = {2,1,3,4,6,5}
Output: 8
Explanation: The heights are 2 1 3 4 6 5.
So we choose the following buildings
2 1 3 4 6 5  and remove others. So total
removed buildings is equal to 4, now the
height of smaller one is 2. So answer is
2 * removed buildings = 2*4 = 8. There is
no answer greater than this.

Example 2:

Input:
N = 2
height[] = {2,1}
Output: 0
Explanation: The heights are 2 1. So we
choose the following buildings 2 5  and
remove others. But there is no other 
buildings to be removed so total removed
= 0.  Now the height of smaller one is 2.
So answer is 2 * removed buildings = 2*0
= 0.

Your Task:
You need to complete the function maxWater that takes height array and size N as parameters and returns the max water that can be stored. The printing is done by the driver code.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

*/

#include<bits/stdc++.h> 
using namespace std; 


int maxWater(int height[], int n) 
{ 
    //Your code here
    int i=0,j=n-1,ans=0;
    while(i<=j)
    {
        ans = max(ans,((j-i-1)*min(height[i],height[j])));
        if(height[i]<height[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return ans;
} 

 
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int height[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>height[i];
        }
        
        cout<<(maxWater(height, n))<<endl;
    }

	 
} 
