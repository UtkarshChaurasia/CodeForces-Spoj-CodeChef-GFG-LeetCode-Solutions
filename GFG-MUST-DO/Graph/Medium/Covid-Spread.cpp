//Problem: https://practice.geeksforgeeks.org/problems/269f61832b146dd5e6d89b4ca18cbd2a2654ebbe/1/


#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int helpaterp(vector<vector<int>> hospital)
    {
        //code here
        int n = hospital.size();
        int m = hospital[0].size();
        vector<vector<bool>> visited(n,vector<bool> (m,0));
        queue<pair<pair<int,int>,int>> q;
        int infected=0;
        int notInfected = 0;
        int time = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(hospital[i][j]==2)
                {
                    infected++;
                    q.push({{i,j},0});
                }
                else if(hospital[i][j]==1) notInfected++;
            }
        }
        vector<pair<int,int>> direction = {{0,-1}, {0,1}, {-1,0}, {1,0}};
        while(!q.empty())
        {
            pair<pair<int,int>,int> curr = q.front();
            q.pop();
            time = curr.second;
            for(auto it : direction)
            {
                int i = curr.first.first+it.first;
                int j = curr.first.second+it.second;
                
                if(i<0 || i>=n || j<0 || j>=m || visited[i][j]==1 || hospital[i][j]!=1) continue;
                
                q.push({{i,j},time+1});
                visited[i][j] = 1;
                notInfected--;
            }
        }
        if(notInfected!=0) return -1;
        return time;
    }
};


// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int R;int C;
        
        cin>>R>>C;
        vector<vector<int>> hospital;
        int i,j;
        for(i=0;i<R;i++)
         {   vector<int> temp;
             for(j=0;j<C;j++)
            {
                int k;
                cin>>k;
                temp.push_back(k);
            }
            hospital.push_back(temp);
         }
        
        Solution ob;
        int ans = ob.helpaterp(hospital);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends