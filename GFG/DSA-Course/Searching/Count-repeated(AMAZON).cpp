/*
Given an array arr[] of N positive integers, where elements are consecutive (sorted). Also, there is a single element which is repeating X (any variable) number of times. Now, the task is to find the element which is repeated and number of times it is repeated.

Example 1:

Input:
N = 5
arr[] = {1,2,3,3,4}
Output: 3 2
Explanation: In the given array, 3 is 
occuring two times.

Example 2:

Input:
N = 5
arr[] = {2,3,4,5,5}
Output: 5 2
Explanation: In the given array, 5 is 
occuring two times.

Your Task:
Complete findRepeating function and return pair of element which is repeated and the number of times it is repeated. The printing is done by the driver code.

Constraints:
1 <= N <= 107
1 <= arr[i] <= 1015

Expected Time Complexity : O(logN)
Expected Auxilliary Space : O(1)

*/


#include <bits/stdc++.h>
using namespace std;

pair<int, int> findRepeating(int *, int);

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    
	    pair<int, int> ans = findRepeating(arr,n);
	    
	    cout << ans.first << " " << ans.second << endl;
	    
	}
	
}

pair<int, int> findRepeating(int *arr, int n)
{
    pair<int,int> ans;
    ans.first = -1;
    ans.second = -1;
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(mid == arr[mid]-arr[0])
        {
            low = mid+1;
        }
        else if(arr[mid]==arr[mid+1] || arr[mid]==arr[mid-1])
        {
            ans.first = arr[mid];
            ans.second = n-(arr[n-1]-arr[0]);
            return ans;
        }
        else
        {
            high = mid-1;
        }
    }
    return ans;
}
