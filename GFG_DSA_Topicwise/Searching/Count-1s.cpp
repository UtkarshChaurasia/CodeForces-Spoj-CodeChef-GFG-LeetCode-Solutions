/*Given a binary sorted non-increasing array of 1s and 0s. You need to print the count of 1s in the binary array.

Example 1:

Input:
N = 8
arr[] = {1,1,1,1,1,0,0,0}
Output: 5
Explanation: Number of 1's in given 
binary array : 1 1 1 1 1 0 0 0 is 5.

Example 2:

Input:
N = 8
arr[] = {1,1,0,0,0,0,0,0}
Output: 2
Explanation: Number of 1's in given 
binary array : 1 1 0 0 0 0 0 0 is 2.

Your Task:
The task is to complete the function countOne() which takes the array arr[] and its size N as inputs and returns the count of 1s in the input array.

Expected Time Complexity: O(LogN).
Expected Auxiliary Space: O(1).

*/





#include <bits/stdc++.h>
using namespace std;

int countOnes(int arr[], int n)
{
    
    // Your code here
    int low = 0;
    int high = n-1;
     while(low<=high)
     {
         int mid = (low+high)/2;
         if(arr[mid]==1)
         {
             if(arr[mid+1]==0)
             {
                 return mid+1;
             }
             else
             {
                 low = mid+1;
             }
         }
         else
         {
             if(arr[mid-1]==1)
             {
                 return mid;
             }
             else
             {
                 high = mid-1;
             }
         }
     }
    
}


int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int *arr = new int[n]; 
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        
        cout <<countOnes(arr, n)<<endl;
    }
    return 0;
}
