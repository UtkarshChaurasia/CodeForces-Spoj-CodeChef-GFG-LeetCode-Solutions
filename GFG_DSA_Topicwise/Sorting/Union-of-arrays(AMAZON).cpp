/*
Given two sorted arrays arr[] and brr[] of size N and M respectively. The task is to find the union of these two arrays.
Union of two arrays can be defined as the common and distinct elements in the two arrays.

Example 1:

Input: 
N = 5, arr1[] = {1, 2, 3, 4, 5}  
M = 3, arr2 [] = {1, 2, 3}
Output: 1 2 3 4 5
Explanation: Distinct elements including 
both the arrays are: 1 2 3 4 5.
Example 2:

Input: 
N = 5, arr1[] = {2, 2, 3, 4, 5}  
M = 5, arr2[] = {1, 1, 2, 3, 4}
Output: 1 2 3 4 5
Explanation: Distinct elements including 
both the arrays are: 1 2 3 4 5.
Example 3:

Input:
N = 5, arr1[] = {1, 1, 1, 1, 1}
M = 5, arr2[] = {2, 2, 2, 2, 2}
Output: 1 2
Explanation: Distinct elements including 
both the arrays are: 1 2.

Your Task: This is a function problem. You only need to complete the function findUnion() that takes two arrays arr1[], arr2[], 
and their size N and M as parameters and returns the union of two arrays. The new line is automatically appended by the driver code.

Expected Time Complexity: O(N+M).
Expected Auxiliary Space: O(N+M).
*/


#include <bits/stdc++.h>
using namespace std;

//arr1,arr2 : the arrays
// n, m: size of arrays
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0; 
    vector<int> ans;
    while (i < n && j < m) 
    { 
        while(  i+1<n  &&  arr1[i]==arr1[i+1]  )
            i++;
        
        while(  j+1<m  &&  arr2[j]==arr2[j+1]  )
            j++;
      
        if (arr1[i] < arr2[j]) 
            ans.push_back(arr1[i++]);
 
      
        else if (arr2[j] < arr1[i]) 
            ans.push_back(arr2[j++]);
  
        else
        {
            ans.push_back(arr2[j++]);
            i++;
        
        }
    } 

    while(i < n)
    {
        while(  i+1<n  &&  arr1[i]==arr1[i+1]  )
            i++;
          
        ans.push_back(arr1[i++]);
    }
  
    while(j < m)
    {
        while(  j+1<m  &&  arr2[j]==arr2[j+1]  )
            j++;
        ans.push_back(arr2[j++]);
    }
    return ans;
}


int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    
	    vector<int> ans = findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
} 
