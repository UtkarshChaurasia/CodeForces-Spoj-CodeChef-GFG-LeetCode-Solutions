/*
Given an undirected graph with V vertices and E edges, check whether it contains any cycle or not. 
Expected Time Complexity: O(V + E)
Expected Space Complexity: O(V)
*/


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool DFSrec(vector<int> adj[],int s, bool visited[], int parent)
    {
        visited[s] = true;
        
        for(int u:adj[s])
        {
            if(!visited[u])
            {
                if(DFSrec(adj,u,visited,s))
                {
                    return true;
                }
            }
            else if(u!=parent)
            {
                return true;
            }
        }
        return false;
    }


	bool isCycle(int V, vector<int>adj[]){
	    // Code here
	    bool visited[V];
	    memset(visited, false, V);
	    for(int i=0;i<V;i++)
	    {
	        if(!visited[i])
	        {
	            if(DFSrec(adj,i,visited,-1))
	            {
	                return true;
	            }
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
