//Question: https://practice.geeksforgeeks.org/problems/find-the-number-of-islands/1


#include <bits/stdc++.h>
using namespace std;

int findIslands(vector<int> A[], int N, int M);

int main() {

    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<int> A[N];
        for (int i = 0; i < N; i++) {
            vector<int> temp(M);
            A[i] = temp;
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        cout << findIslands(A, N, M) << endl;
    }
    return 0;
}// } Driver Code Ends

int isSafe(vector<int> MM[], int row, int col, vector<vector<bool>> &visited, int N, int M)
{
    return (row >= 0) && (row < N) && (col >= 0) && (col < M) &&
           (MM[row][col] && !visited[row][col]);
}


void DFSrec(vector<int> A[], int i, int j, vector<vector<bool>> &visited, int N, int M)
{
    
    int row[] = {-1, -1, -1, 0, 0, 1, 1, 1}; // Check for all 8 neighbours of i and j
    int col[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    visited[i][j] = true;
    for(int k=0;k<8;k++)
    {
        if((i+row[k]<N && j+col[k]<M) && (isSafe(A, i+row[k], j+col[k], visited, N, M)))
        {
            DFSrec(A, i+row[k], j+col[k], visited, N, M);
        }
    }
    
}


/*  Function to find number of islands in the given graph
*   A[]: input array
*   N, M: Row and column of given matrix
*/
int findIslands(vector<int> A[], int N, int M) {

    // Your code here
    int count = 0;
    vector<vector<bool>> visited(N,vector<bool>(M, false));
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(!visited[i][j] && A[i][j])
            {
                DFSrec(A,i,j,visited,N,M);
                count++;
            }
        }
    }
    return count;
}
