//Problem: https://practice.geeksforgeeks.org/problems/prerequisite-tasks/1/?track=amazon-graphs&batchId=192

class Solution {
public:

    vector<unordered_set<int>> buildGraph(int N, vector<pair<int, int>>& prerequisites)
    {
        vector<unordered_set<int>> graph(N);
        for (auto pre : prerequisites)
            graph[pre.second].insert(pre.first);
        return graph;
    }
    
    bool dfsCycle(vector<unordered_set<int>>& graph, int curr, vector<bool>& onpath, vector<bool>& visited)
    {
        if(visited[curr]) return false;
        onpath[curr] = true;
        visited[curr] = true;
        for(int i : graph[curr])
        {
            if(onpath[i] || dfsCycle(graph, i, onpath, visited)) return true;
        }
        
        return onpath[curr] = false;;
    }
   

	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    // Code here
	    vector<unordered_set<int>> graph = buildGraph(N, prerequisites);
	    vector<bool> onpath(N, false), visited(N, false);
	    for(int i=0;i<N;i++)
	    {
	        if(!visited[i] && dfsCycle(graph,i,onpath,visited)) return false;
	    }
	    return true;
	}
};