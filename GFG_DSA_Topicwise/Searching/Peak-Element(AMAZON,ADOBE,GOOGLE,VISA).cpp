/*
Given an array A of N integers. The task is to find a peak element in A in O( log N ) .
An array element is peak if it is not smaller than its neighbours. For corner elements, consider only one neighbour.

Example 1:

Input:
N = 3
A[] = {1,2,3}
Output: 2 
Explanation: In the given array, 
3 is the peak element as it is 
greater than its neighbour.
Example 2:

Input:
N = 2
A[] = {3,4}
Output: 1
Explanation: 4 is the peak element 
as it is greater than its neighbour 
elements.
Your Task:
You don't have to read input or print anything. Just complete the provided function peakElement() and return a valid index with respect to 0 based indexing.
Note 1: Multiple peak element may be possible, in that case return any of the valid index .
Note 2: If you click on Compile and Test the output will be 1 if the index that you return is correct. Otherwise output will be 0. 

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).

*/




#include<bits/stdc++.h>
using namespace std;

int peakElement(int arr[], int n)
{
   // Your code here
   int low = 0;
   int high = n-1;
   while(low<=high)
   {
       int mid = (high+low)/2;
       if((mid==0 || arr[mid]>=arr[mid-1]) && (mid==(n-1)||arr[mid]>=arr[mid+1]))
       {
           return mid;
       }
       else if(mid!=0 && (arr[mid-1]>arr[mid]))
       {
           high = mid - 1;
       }
       else
       {
           low = mid+1;
       }
       
   }
   return -1;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		bool f=0;
		int A = peakElement(a,n);
		
		if(n==1)
		f=1;
		else
		if(A==0 and a[0]>=a[1])
		f=1;
		else if(A==n-1 and a[n-1]>=a[n-2])
		f=1;
		else if(a[A] >=a[A+1] and a[A]>= a[A-1])
		f=1;
		else
		f=0;
		
		cout<<f<<endl;
		
	}

	return 0;
}
