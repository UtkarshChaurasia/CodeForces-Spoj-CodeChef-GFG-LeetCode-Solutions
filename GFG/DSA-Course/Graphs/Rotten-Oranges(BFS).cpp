/*
Given a grid of dimension nxm where each cell in the grid can have values 0, 1 or 2 which has the following meaning:
0 : Empty cell
1 : Cells have fresh oranges
2 : Cells have rotten oranges

We have to determine what is the minimum time required to rot all oranges. A rotten orange at index [i,j] can rot other fresh orange at 
indexes [i-1,j], [i+1,j], [i,j-1], [i,j+1] (up, down, left and right) in unit time. 
 

Example 1:

Input: grid = {{0,1,2},{0,1,2},{2,1,1}}
Output: 1
Explanation: The grid is-
0 1 2
0 1 2
2 1 1
Oranges at positions (0,2), (1,2), (2,0)
will rot oranges at (0,1), (1,1), (2,2) and 
(2,1) in unit time.
Example 2:

Input: grid = {{2,2,0,1}}
Output: -1
Explanation: The grid is-
2 2 0 1
Oranges at (0,0) and (0,1) can't rot orange at
(0,3).
 

Your Task:
You don't need to read or print anything, Your task is to complete the function orangesRotting() which takes grid as input parameter and returns the minimum 
time to rot all the fresh oranges. If not possible returns -1.
 

Expected Time Compelxity: O(n*m)
Expected Auxiliary Space: O(1)
*/


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int totFresh = 0;
        queue<pair<int, int>> q;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]>0)
                {
                    totFresh++;
                }
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
            }
        }
        
        int row[4] = {0,1,0,-1};
        int col[4] = {-1,0,1,0};
        int res = -1;
        while(!q.empty())
        {
            res++;
            int n = q.size();
            
            for(int i=0;i<n;i++)
            {
                pair<int,int> co = q.front();
                int x = co.first;
                int y = co.second;
                q.pop();
                totFresh--;
                for(int j=0;j<4;j++)
                {
                    int r = x+row[j];
                    int c = y+col[j];
                    if(r>=grid.size() || r<0 || c>=grid[0].size() || c<0 || grid[r][c]!=1)
                    {
                        continue;
                    }
                    q.push({r,c});
                    grid[r][c] = 2;
                }
            }
        }
        
        if(totFresh==0)
        {
            return max(0,res);
        }
        return -1;
        
        
    }
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
} 
