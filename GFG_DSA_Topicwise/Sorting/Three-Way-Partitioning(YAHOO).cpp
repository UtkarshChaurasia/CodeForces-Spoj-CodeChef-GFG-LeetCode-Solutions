/*Given an array A[] and a range [a, b]. The task is to partition the array around the range such that array is divided into three parts.
1) All elements smaller than a come first.
2) All elements in range a to b come next.
3) All elements greater than b appear in the end.
The individual elements of three sets can appear in any order. You are required to return the modified arranged array.

Example 1:

Input: N = 5, A[] = {1, 2, 3, 3, 4}
[a, b] = [1, 2]
Output: {1, 2, 3, 3, 4}
Explanation: One possible arrangement is:
{1, 2, 3, 3, 4}. 
Example 2:

Input: N = 3, A[] = {1, 2, 3}
[a, b] = [1, 3]
Output: 1 2 3

Your Task: The task is to complete the function threeWayPartition() which should segregate the elements as required. The function returns an array.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
*/

//Only function implemented

vector<int> threeWayPartition(vector<int> arr, int a, int b)
{
     //Your code here
     int n = arr.size();
     int l = 0,mid=0,h = n-1;
     while(mid<=h)
     {
         if(arr[mid]<a)
         {
             swap(arr[mid],arr[l]);
             mid++;
             l++;
         }
         else if((arr[mid]>=a) && (arr[mid]<=b))
         {
             mid++;
         }
         else if(arr[mid]>b)
         {
             swap(arr[mid],arr[h]);
             h--;
         }
     }
     return arr;
     
}
