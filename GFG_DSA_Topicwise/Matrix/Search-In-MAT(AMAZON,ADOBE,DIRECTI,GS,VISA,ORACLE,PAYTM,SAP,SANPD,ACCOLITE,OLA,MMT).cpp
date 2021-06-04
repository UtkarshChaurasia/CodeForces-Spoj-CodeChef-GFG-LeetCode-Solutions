/*
Given a matrix mat[][] of size N x M, where every row and column is sorted in increasing order, and a number X is given. The task is to 
find whether element X is present in the matrix or not.

Example 1:

Input:
N = 3
M = 3
mat[][]: 3 30 38 
         44 52 54 
         57 60 69
X = 62
Output:
0
Explanation: 62 is not present in the
matrix, so output is 0

Example 2:

Input:
N = 1
M = 6
mat[][] : 18 21 27 38 55 67
X = 55
Output:
1
Explanation: 55 is present in the
matrix at 5th cell.

Your Task:
You don't need to read input or print anything. You just have to complete the function matSearch() which takes a 2D matrix mat[][], its dimensions
N and M and integer X as inputs and returns 1 if the element X is present in the matrix and 0 otherwise.

Expected Time Complexity: O(N+M).
Expected Auxiliary Space: O(1).

*/


#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int n, int m, int x)
	{
	    // your code here
	    int right = m-1,top = 0;
	    while(right>=0 && top<n)
	    {
	        if(mat[top][right]==x)
	        {
	            return 1;
	        }
	        else if(mat[top][right]<x)
	        {
	            top++;
	        }
	        else if(mat[top][right]>x)
	        {
	            right--;
	        }
	    }
	    return 0;
	}
};


int main ()
{
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> arr[i][j];
                
        int x; cin >> x;
        Solution ob;
        cout << ob.matSearch (arr, n, m, x) << endl;
    }
