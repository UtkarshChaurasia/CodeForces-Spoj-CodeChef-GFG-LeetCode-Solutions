/*
Given the adjacency list of a bidirectional graph. Your task is to print the adjacency list for each vertex.

Input:
The first line of input is T denoting the number of testcases.Then first line of each of the T contains two positive integer V and E where 'V' is 
the number of vertex and 'E' is number of edges in graph. Next, 'E' line contains two positive numbers showing that there is an edge between these two vertex.

Output:
For each vertex, print their connected nodes in order you are pushing them inside the list. See the example input-output for the reference of format.

Your Task:
You don't need to read input or print anything. Your task is to complete the function printGraph () which takes the adjacency list of the graph and 
the number of vertices V as inputs and prints the adjacency list of the Graph.

Expected Time Complexity: O(V + E).
Expected Auxiliary Space: O(1).

Constraints:
1 <= T <= 200
1 <= V <= 103
1 <= E = V*(V-1)

Example:
Input:
1
5 7
0 1
0 4
1 2
1 3
1 4
2 3
3 4

Output:
0-> 1-> 4
1-> 0-> 2-> 3-> 4
2-> 1-> 3
3-> 1-> 2-> 4
4-> 0-> 1-> 3
*/

#include<bits/stdc++.h>
using namespace std;

void printGraph(vector<int> adj[], int V)
{
    // Your code here
    for(int i = 0;i<V;i++)
    {
        cout<<i;
        for(auto x : adj[i])
        {
            cout<<"-> "<<x;
        }
        cout<<endl;
    }
}


int main()
{  
   int t;
   cin>>t;
   while(t--)
    {  int v, e;
       cin>>v>>e;
       int a, b;
       vector<int> adj[v];
       for(int i=0;i<e;i++)
       {
 		    cin>>a>>b;
 		    adj[a].push_back(b);
 		    adj[b].push_back(a);
       }
		printGraph(adj, v);
       
     }
    return 0;
}
