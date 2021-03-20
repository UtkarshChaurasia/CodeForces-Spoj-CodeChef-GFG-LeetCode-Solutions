/*
Given an array arr[] of N positive integers and a number K. The task is to find the kth smallest element in the array.

 

Example 1:

Input: 
N = 5, K = 3
arr[] = {3,5,4,2,9}

Output: 
4

Explanation: 
Third smallest element in the array is 4.
Example 2:

Input:
N = 5, k = 5
arr[] = {4,3,7,6,5}

Output: 
7

Explanation: 
Fifth smallest element in the array is 7.

Your Task:
You  don't need to read inputs or print anything. Complete the method kthSmallest() which takes array arr[], size of the array n and value k as input
parameters and returns kth smallest element.

Constraints:
1 <= N <= 106
1 <= arr[i] <= 106
1 <= K <= N
Array do not contains duplicates.

Expected Time Complexity: O(NlogK)
Expected Auxilliary Space: O(K)
*/

class Solution{
    
    public:
    void maxHeapify(int arr[],int n,int i)
    {
        int largest = i, l = 2*i+1, r = 2*i+2;
        if(l<n && arr[largest]<arr[l]) largest = l;
        if(r<n && arr[largest]<arr[r]) largest = r;
        
        if(largest!=i)
        {
            swap(arr[i],arr[largest]);
            maxHeapify(arr,n,largest);
        }
    }
    
    public:
    void buildHeap(int arr[],int n)
    {
        for(int i=n/2-1;i>=0;i--)
            maxHeapify(arr,n,i);
    }
    public:
        //Function to find the kth smallest element in the array.
        int kthSmallest(int arr[], int n, int k){
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
