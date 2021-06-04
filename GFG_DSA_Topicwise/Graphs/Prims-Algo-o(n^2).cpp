
#include<bits/stdc++.h>
using namespace std;



class Solution{
	public:

    int spanningTree(int V, vector<vector<int>> adj[]) {
        // code here
        int key[V];
        memset(key,INT_MAX,V);
        key[0] = 0;
        int mst[V];
        memset(mst,V,false);
        int result = 0,u;
        
        for(int i=0;i<V;i++)
        {
            u=-1;
            for(int count=0;count<V;count++)
            {
                if(!mst[count] && (u==-1 || key[count]<key[u]))
                {
                    u=i;
                }
            }
            
            mst[u] = true;
            result+= key[u];
            
            
        
            for(int j=0;j<V;j++)
            {
                
                if(!mst[j] && adj[u][j]!=0)
                {
                    key[u] = min(key[u],adj[u][j]);
                }
                
            }
        }
        return result;
        
    }
};


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}
