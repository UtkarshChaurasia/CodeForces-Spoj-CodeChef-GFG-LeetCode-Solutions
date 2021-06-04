/*
Given a Directed Graph with V vertices and E edges, check whether it contains any cycle or not.
Expected Time Complexity: O(V + E)
Expected Auxiliary Space: O(V)
*/


#include<bits/stdc++.h>
using namespace std;

class Solution {
    
public:

   bool DFSrec(int s,vector<bool> &visited,vector<bool> &recStack,vector<int> adj[])
    {
        visited[s] = true;
        recStack[s] = true;
        
        for(auto i:adj[s])
        {
            if(!visited[i] && DFSrec(i,visited,recStack,adj)==true)
            {
                return true;
            }
            else if(recStack[i]==true)
            {
                return true;
            }
        }
        recStack[s] = false;
        return false;
    }


	bool isCyclic(int V, vector<int> adj[]) {
	   	vector<bool> visited(V, false);
	   	vector<bool> recStack(V, false);
	   	
	   	for(int i = 0;i<V;i++)
	   	{
	   	    if(visited[i]==false)
	   	    {
	   	        if(DFSrec(i,visited,recStack,adj)==true)
	   	        {
	   	            return true;
	   	        }
	   	    }
	   	}
	   	return false;
	}
};

int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
