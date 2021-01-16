/*
Given a Directed Graph with V vertices and E edges, check whether it contains any cycle or not.
Expected Time Complexity: O(V + E)
Expected Auxiliary Space: O(V)
*/


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool isCyclic(int V, vector<int> adj[]) {
	   	int count=0;
	   	vector<int> indegree(V,0);
	   	for(int i=0;i<V;i++)
	   	{
	   	    for(auto x:adj[i])
	   	    {
	   	        indegree[x]++;
	   	    }
	   	}
	   	
	   	queue<int> q;
	   	for(int i=0;i<V;i++)
	   	{
	   	    if(indegree[i]==0)
	   	    {
	   	        q.push(i);
	   	    }
	   	}
	   	
	   	while(!q.empty())
	   	{
	   	    int top = q.front();
	   	    q.pop();
	   	    
	   	    for(auto x:adj[top])
	   	    {
	   	        indegree[x]--;
	   	        if(indegree[x]==0)
	   	        {
	   	            q.push(x);
	   	        }
	   	    }
	   	    count++;
	   	}
	   	if(count==V)
	   	{
	   	    return false;
	   	}
	   	return true;
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
