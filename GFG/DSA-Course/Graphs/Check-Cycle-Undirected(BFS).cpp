/*
Given an undirected graph with V vertices and E edges, check whether it contains any cycle or not. 
Expected Time Complexity: O(V + E)
Expected Space Complexity: O(V)
*/


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:


    bool BFS(vector<int> adj[], int V, int s,vector<bool>& visited)
    {
        vector<int> parent(V,-1);
        queue<int> q;
        visited[s] = true;
        q.push(s);
        
        
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            for(auto v:adj[u])
            {
                if(!visited[v])
                {
                    
                    visited[v] = true;
                    q.push(v);
                    parent[v] = u;
                }
                else if(parent[u]!=v)
                {
                    return true;
                }
            }
        }
        
        return false;
    }

	bool isCycle(int V, vector<int>adj[]){
	    // Code here
	    vector<bool> visited(V, false);
	    for(int i=0;i<V;i++)
	    {
	        if((!visited[i]) && BFS(adj,V,i,visited))
    	    {
    	        return true;
    	    }
	    }
	    return false;
	}
};


int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isCycle(V, adj);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
