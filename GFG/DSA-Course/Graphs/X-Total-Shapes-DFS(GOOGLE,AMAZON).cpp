/*
Given  a grid of n*m consisting of O's and X's. The task is to find the number of 'X' total shapes.
Note: 'X' shape consists of one or more adjacent X's (diagonals not included).
 

Example 1:

Input: grid = {{X,O,X},{O,X,O},{X,X,X}}
Output: 3
Explanation: 
The grid is-
X O X
O X O
X X X
So, X with same colour are adjacent to each 
other vertically for horizontally (diagonals 
not included). So, there are 3 different groups 
in the given grid.

Example 2:

Input: grid = {{X,X},{X,X}}
Output: 1
Expanation: 
The grid is- 
X X
X X
So, X with same colour are adjacent to each
other vertically for horizontally (diagonals
not included). So, there is only 1 group
in the given grid.
 

Your Task:
You don't need to read or print anything. Your task is to complete the function xShape() which takes grid as input parameter and returns the count of total X shapes.
 

Expected Time Compelxity: O(n*m)
Expected Space Compelxity: O(n*m)
*/

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:


    void dfs(vector<vector<char>>& grid, int x, int y)
    {
        if(x<0 || y<0 || x>=grid.size() || y>=grid[x].size())
        {
            return;
        }
        if(grid[x][y]=='X')
        {
            grid[x][y]='O';
            dfs(grid,x,y+1);
            dfs(grid,x+1,y);
            dfs(grid,x-1,y);
            dfs(grid,x,y-1);
        }
        
    }
    
    int xShape(vector<vector<char>>& grid) {
        int count=0;
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]=='X')
                {
                    count++;
                    dfs(grid,i,j);
                }
            }
        }
        return count;
    }
};


int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.xShape(grid);
		cout << ans <<'\n';
	}
	return 0;
} 
