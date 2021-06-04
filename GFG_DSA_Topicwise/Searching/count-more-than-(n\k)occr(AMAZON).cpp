/*
Given an array arr[] of size N and an element k. The task is to find all elements in array that appear more than n/k times.
Example 1:
Input:
N = 8
arr[] = {3,1,2,2,1,2,3,3}
k = 4
Output: 2
Explanation: In the given array, 3 and
 2 are the only elements that appears 
more than n/k times.
Example 2:
Input:
N = 4
arr[] = {2,3,3,2}
k = 3
Output: 2
Explanation: In the given array, 3 and 2 
are the only elements that appears more 
than n/k times. So the count of elements 
are 2.
Your Task:
The task is to complete the function countOccurence() which returns count of elements with more than n/k times appearance.
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int countOccurence(int arr[], int n, int k);

int main() {
    int t, k;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        cout << countOccurence(arr, n, k) << endl;
    }
    return 0;
}

int countOccurence(int arr[], int n, int k) {
    // Your code here
    int reqCount = n/k;
    int count = 0;
    int maxi = *max_element(arr, arr+n);
    for(int i=0;i<n;i++)
    {
       arr[i]=--arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        arr[arr[i]%maxi] = arr[arr[i]%maxi]+maxi;
    }
    
    for(int i=0;i<n;i++)
    {
        if((arr[i]/maxi)>reqCount)
        {
            count++;
        }
    }
    return count;
    
}
