//Problem: https://practice.geeksforgeeks.org/problems/strongly-connected-components-kosarajus-algo/1

class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	stack<int> order;
	
	void findOrder(vector<int> adj[], vector<bool>& visited, int u)
	{
	    visited[u] = true;
	    for(auto it : adj[u])
	    {
	        if(!visited[it]) findOrder(adj, visited, it);
	    }
	    order.push(u);
	}
	
	
	void transpose(vector<int> adj[], vector<int> adjTranspose[], int V)
	{
	    for(int i = 0;i<V;i++)
	    {
	        for(auto it : adj[i])
	        {
	            adjTranspose[it].push_back(i);
	        }
	    }
	}
	
	 void dfs(vector<int> adjTranspose[], vector<bool>& visited, int u)
	 {
	     visited[u] = true;
	     for(auto it : adjTranspose[u])
	     {
	         if(!visited[it]) dfs(adjTranspose, visited, it);
	     }
	 }
	
    int kosaraju(int V, vector<int> adj[])
    {
        //code here
        vector<bool> visited(V,false);
        for(int i=0;i<V;i++)
        {
            if(!visited[i]) findOrder(adj, visited, i);
        }
        
        vector<int> adjTranspose[V];
        transpose(adj, adjTranspose, V);
        int result=0;
        for(int i=0;i<V;i++) visited[i] = false;
        while(!order.empty())
        {
            int temp = order.top();
            order.pop();
            if(!visited[temp])
            {
                dfs(adjTranspose, visited, temp); result++;
            }
        }
        return result;
        
    }
};