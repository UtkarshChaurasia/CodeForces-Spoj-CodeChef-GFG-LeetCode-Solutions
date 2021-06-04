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



/* Function to print an array */
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




void quickSort(int arr[], int low, int high) {
    if (low < high)     {
        // pi is partitioning index, arr[p] is now  at right place
        int pi = partition(arr, low, high);
        // Separately sort elements before / partition and after partition
        quickSort(arr, low, pi);
        quickSort(arr, pi + 1, high);
    }
}





/* This function takes last element as pivot, places  the pivot element 
   at its correct position in sorted  array, and places all smaller (smaller
   than pivot) to left of pivot and all greater elements to right  of pivot */
int hoarePartition (int arr[], int low, int high)
{
   // Your code here
   int i = low-1;
   int j = high+1;
   int pivot = arr[low];
   while(true)
   {
       do{
           i++;
       }while(arr[i]<pivot);
       
       do{
           j--;
       }while(arr[j]>pivot);
       if(i>=j)
       {
           return j;
       }
       swap(arr[i],arr[j]);
       
   }
}
