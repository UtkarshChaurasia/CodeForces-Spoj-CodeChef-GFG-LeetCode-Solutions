/*
Given an array arr[] of N positive integers and a number K. The task is to find the kth largest element in the array.

Example 1:

Input:
N = 5, K = 3
arr[] = {3, 5, 4, 2, 9}
Output: 
4
Explanation: 
Third largest element
in the array is 4.
Example 2:

Input:
N = 5, K = 5
arr[] = {4, 3, 7, 6, 5} 
Output: 
3
Explanation: 
Fifth largest element
in the array is 3.
Your Task:
You are required to complete the method KthLargest() which takes 3 arguments and returns the Kth Largest element.

Constraints:
1 <= N <= 106
1 <= arr[i] <= 106
1 <= K <= N

Expected Time Complexity : O(NlogK)
Expected Auxilliary Space : O(K)
*/

class Solution{
    
    
    public:
    void maxHeapify(int arr[],int n,int i)
    {
        int smallest=i,l=2*i+1,r=2*i+2;
        if(l<n && arr[smallest]>arr[l]) smallest = l;
        if(r<n && arr[smallest]>arr[r]) smallest = r;
         if(smallest!=i)
         {
             swap(arr[i],arr[smallest]);
             maxHeapify(arr,n,smallest);
         }
        
    }
    
    public:
    void buildHeap(int arr[],int n)
    {
        for(int i=n/2-1;i>=0;i--)
        {
            maxHeapify(arr,n,i);
        }
    }
    
    
    public:
        int KthLargest(int arr[], int n, int k) {
        // Your code here
        buildHeap(arr,n);
        for(int i=n-1;i>0;i--)
        {
            swap(arr[0],arr[i]);
            maxHeapify(arr,i,0);
        }
        return arr[k-1];
    }
};
