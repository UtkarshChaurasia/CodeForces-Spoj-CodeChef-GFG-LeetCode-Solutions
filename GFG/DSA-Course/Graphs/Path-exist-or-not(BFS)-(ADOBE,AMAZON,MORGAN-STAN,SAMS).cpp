/*
Given a square matrix filled with 0, 1, 2, 3. Check whether there is a path possible from the source to destination. You can traverse up, down, right and left. (Check Your Task for more details).

Input:
The first line of input is an integer T denoting the no of testcases. Then T test cases follow. Each test case consists of 2 lines. The first line 
of each test case contains an integer N denoting the size of the square matrix. Then in the next line are N*N space-separated values of the matrix (M).

Output:
Complete isExist function and return 1 if the path exists from source to destination else return 0.

Your Task:
You don't need to read input or print anything. Your task is to complete the function is_possible() which takes a square matrix (M) and its size (N) 
as inputs and returns true if there's path possible from the source to destination. Else, it returns false. 
You have to start from the Source, traverse through the blank cells and reach the Destination. You can move Up, Down, Right and Left. The description 
of cells is as follows:

A value of cell 1 means Source.
A value of cell 2 means Destination.
A value of cell 3 means Blank cell.
A value of cell 0 means Wall.
Note: There are only a single source and a single destination.

Expected Time Complexity: O(N2).
Expected Auxiliary Space: O(N2).

Constraints:
1 <= T <= 100
1 <= N <= 100

Example:
Input:
2
4
3 0 0 0 0 3 3 0 0 1 0 3 0 2 3 3 
3
0 3 2 3 0 0 1 0 0

Output:
1
0
*/

#include <bits/stdc++.h>

#define MAX 1000
using namespace std;

bool is_possible(vector<vector<int>> &a, int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> a(MAX, vector<int>(MAX, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) cin >> a[i][j];

        cout << is_possible(a, n) << endl;
    }
    return 0;
}


// User function template for C++


// M : input matrix
// N : size of the matrix
bool is_possible(vector <vector <int>> &M, int N) {
    queue<pair<int,int>> q;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(M[i][j]==1)
            {
                q.push(pair<int,int>(i,j));
            }
        }
    }
    int plusr[4] = {-1,0,0,1};
    int plusc[4] = {0,-1,1,0};
    
    while(!q.empty())
    {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        for(int i=0;i<4;i++)
        {
            int nextr = r+plusr[i];
            int nextc = c+plusc[i];
            
            if(nextr<0||nextc<0||nextr>=N||nextc>=N)
            {
                continue;
            }
            if(M[nextr][nextc]==2)
            {
                return 1;
            }
            if(M[nextr][nextc]==3)
            {
                M[nextr][nextc]=1;
                q.push(pair<int,int>(nextr,nextc));
            }
        }
    }
    return 0;
}
