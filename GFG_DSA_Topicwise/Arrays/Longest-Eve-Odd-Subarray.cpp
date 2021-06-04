/*
Longest Subarray Of Evens And Odds

You are given an array of size n. Find the maximum possible length of a subarray such that its elements are arranged alternately either as even and odd or 
odd and even .

Example 1:

Input:
n = 5
a[] = {10,12,14,7,8}
Output: 3
Explanation: The max length of subarray
is 3 and the subarray is {14 7 8}. Here 
the array starts as an even element and 
has odd and even elements alternately.

Example 2:

Input:
n = 2
a[] = {4,6}
Output: 1
Explanation: The array contains {4 6}. 
So, we can only choose 1 element as 
that will be the max length subarray.

OPTIMIZED

TIME: O(N)
SPACE: O(1)
*/


#include<iostream> 
using namespace std; 

int maxEvenOdd(int a[], int n) 
{ 
   //Your code here
   int count = 1,curr_max = 1,i;
   for(i=0;i<n-1;i++)
   {
       if((a[i]&1)^(a[i+1]&1)==1)
       {
           count++;
           if(count>curr_max)
           {
               curr_max = count;
           }
       }
       else
       {
           count = 1;
       }
   }
   return curr_max;
} 


/* Driver program to test maxSubArraySum */
int main() 
{ 
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int sizeOfArray;
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        
        for(int i=0;i<sizeOfArray;i++)
        {
            cin>>arr[i];
        }
        cout  << maxEvenOdd(arr, sizeOfArray)<<endl; 
    }
   return 0; 
} 
