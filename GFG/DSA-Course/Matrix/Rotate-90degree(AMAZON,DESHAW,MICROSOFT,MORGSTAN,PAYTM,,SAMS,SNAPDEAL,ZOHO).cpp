/*
Given a square matrix[][] of size N x N. The task is to rotate it by 90 degrees in an anti-clockwise direction without using any extra space.

Example 1:

Input:
N = 3
matrix[][] = [[1 2 3],
              [4 5 6],
              [7 8 9]]
Output:
3 6 9 
2 5 8 
1 4 7
Your Task:
You only need to implement the given function rotate(). Do not read input, instead use the arguments given in the function. 

Expected Time Complexity: O(N*N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 50
1 <= matrix[][] <= 100
*/


#include<bits/stdc++.h>
using namespace std;
void rotate (vector<vector<int> >& matrix);

void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    int row = matrix.size();
    int col = matrix[0].size();
    for(int i=0;i<row;i++)
    {
        for(int j=i+1;j<col;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i = 0; i < col; i++)
	{
	    int low = 0, high = col - 1;
	    
	    while(low < high)
	    {
	        swap(matrix[low][i], matrix[high][i]);
	        
	        low++;
	        high--;
	    }
	}
}



int main()
{
    int t;
    cin>>t; 
    while(t--)
    {
        int n;
        cin>>n; 
        vector<vector<int> > matrix(n);
        for(int i=0; i<n; i++)
        {
            matrix[i].resize(n);
            for(int j=0; j<n; j++)
                cin>>matrix[i][j]; 
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i)
        {
            for(int j=0; j<n; j++)
                cout<<matrix[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
