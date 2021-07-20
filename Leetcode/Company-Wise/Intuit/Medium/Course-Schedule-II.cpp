// PROBLEM : https://leetcode.com/problems/course-schedule-ii/

class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
       vector<int> res;
        int n = numCourses;
        vector<vector<int>> graph(n,vector<int>());
        vector<int> indegree(n,0);
        
        for(auto p: prerequisites) {
            graph[p[1]].push_back(p[0]);
            ++indegree[p[0]];
        }

        queue<int> q;
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
                
            }
        }
        while(!q.empty())
        {
            int t = q.front();
            q.pop();
            res.push_back(t);
            
            for(int it : graph[t])
            {
               if(--indegree[it]==0) q.push(it);
            }
        }
        
       return res.size() == n ? res : vector<int>();
        
        
        
    }
};