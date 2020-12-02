/*
Given two arrays A and B respectively of size N and M, the task is to print the count of elements in the intersection (or common elements) of the two arrays.

For this question, the intersection of two arrays can be defined as the set containing distinct common elements between the two arrays. 

Example 1:

Input:
5 3
89 24 75 11 23
89 2 4

Output: 
1

Explanation: 
89 is the only element 
in the intersection of two arrays.
Example 2:

Input:
6 5
1 2 3 4 5 6
3 4 5 6 7 

Output: 
4

Explanation: 
3 4 5 and 6 are the elements 
in the intersection of two arrays.
Your Task:
The task is to complete the function NumberofElementsInIntersection() which takes 4 inputs ie- array a, array b, n which is the size of array a, m 
which is the size of array b. The function should return the count of the number of elements in the intersection.

Expected Time Complexity: O(N + M).
Expected Auxiliary Space: O(min(N,M)).
*/



#include<bits/stdc++.h>
using namespace std;

int NumberofElementsInIntersection (int a[], int b[], int n, int m )
{
    // Your code goes here
    set<int> st;
    for(int i=0;i<n;i++)
    {
        st.insert(a[i]);
    }
    int count=0;
    for(int i=0;i<m;i++)
    {
        if(st.find(b[i])!=st.end())
        {
            count++;
            st.erase(b[i]);
        }
    }
    return count;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n], b[m];
		for(int i=0; i<n; i++)
			cin>>a[i];

		for(int i=0; i<m; i++)
			cin>>b[i];
			
		cout << NumberofElementsInIntersection(a,b,n,m) << endl;
	}
	return 0;
} 
