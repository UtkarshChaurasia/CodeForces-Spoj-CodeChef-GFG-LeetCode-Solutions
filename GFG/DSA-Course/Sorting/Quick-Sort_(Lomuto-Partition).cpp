/*Given an array of integers. Complete the partition() function used for the implementation of Quick Sort.

Example 1:

Input: N = 5, arr[] = { 4, 1, 3, 9, 7}
Output: 1 3 4 7 9
Example 2:

Input: N = 10, 
arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
Output: 1 2 3 4 5 6 7 8 9 10

TIME: O(N^2)
SPACE: O(1)
*/


#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int partition (int arr[], int low, int high);
/* The main function that implements QuickSort
 arr[] --> Array to be sorted, low  --> Starting index, high  --> Ending index */
 
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now at right place */
        int pi = partition(arr, low, high);
        // Separately sort elements before partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}


/* This function takes last element as pivot, places  the pivot element 
   at its correct position in sorted  array, and places all smaller (smaller
   than pivot) to left of pivot and all greater elements to right  of pivot */
int partition (int arr[], int low, int high)
{
   // Your code here
   int pivot = arr[high];
   int i = low-1;
   for(int j=low;j<high;j++)
   {
       if(arr[j]<pivot)
       {
           i++;
           swap(arr[i],arr[j]);
       }
   }
   swap(arr[i+1],arr[high]);
   return (i+1);
   
}

