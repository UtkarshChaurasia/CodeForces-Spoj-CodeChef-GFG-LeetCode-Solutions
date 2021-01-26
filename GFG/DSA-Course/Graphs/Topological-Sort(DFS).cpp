/*
Given a Directed Graph with V vertices and E edges, Find any Topological Sorting of that Graph.

Expected Time Complexity: O(V + E).
Expected Auxiliary Space: O(V).
*/

class Solution{
	public:
	
	void dfs(vector<int> adj[], vector<bool>& visited, int start, vector<int>& st)
	{
	    visited[start] = true;
	    for(auto x:adj[start])
	    {
	        if(!visited[x])
	        {
	            dfs(adj,visited,x,st);
	        }
	    }
	    
	    st.push_back(start);
	}
	
	vector<int> topoSort(int V, vector<int> adj[]) {
	    // code here
	    vector<bool> visited(V,false);
	    
	    vector<int> st;
	    for(int i=0;i<V;i++)
	    {
	        if(!visited[i])
	        {
	            dfs(adj,visited,i,st);
	        }
	    }
	    
	    reverse(st.begin(),st.end());
	    
	    return st;
	}
};
