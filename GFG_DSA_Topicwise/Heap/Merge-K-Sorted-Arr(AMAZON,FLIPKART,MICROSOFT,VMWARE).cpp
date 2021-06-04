/*
Given K sorted arrays arranged in the form of a matrix of size K*K. The task is to merge them into one sorted array.
Example 1:

Input:
K = 3
arr[][] = {{1,2,3},{4,5,6},{7,8,9}}
Output: 1 2 3 4 5 6 7 8 9
Explanation:Above test case has 3 sorted
arrays of size 3, 3, 3
arr[][] = [[1, 2, 3],[4, 5, 6], 
[7, 8, 9]]
The merged list will be 
[1, 2, 3, 4, 5, 6, 7, 8, 9].
Example 2:

Input:
K = 4
arr[][]={{1,2,3,4}{2,2,3,4},
         {5,5,6,6},{7,8,9,9}}
Output:
1 2 2 2 3 3 4 4 5 5 6 6 7 8 9 9 
Explanation: Above test case has 4 sorted
arrays of size 4, 4, 4, 4
arr[][] = [[1, 2, 2, 2], [3, 3, 4, 4],
[5, 5, 6, 6]  [7, 8, 9, 9 ]]
The merged list will be 
[1, 2, 2, 2, 3, 3, 4, 4, 5, 5, 
6, 6, 7, 8, 9, 9 ].
Your Task:
You do not need to read input or print anything. Your task is to complete mergeKArrays() function which takes 2 arguments, an arr[k][k] 2D Matrix 
containing k sorted arrays and an integer k denoting the number of sorted arrays, as input and returns the merged sorted array ( as a pointer to
the merged sorted arrays in cpp, as an ArrayList in java, and list in python)

Expected Time Complexity: O(nk Logk)
Expected Auxiliary Space: O(k)
*/

struct Triplet
    {
        int val,apos,vpos;
        Triplet(int v,int ap, int vp)
        {
            val=v;apos=ap;vpos=vp;
        }
    };
    
  
    struct comp
    {
        bool operator()(Triplet t1, Triplet t2)
        {
            return t1.val>t2.val;
        }
    };
class Solution{
    
    public:
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
       
        vector<int> res;
        priority_queue<Triplet, vector<Triplet>, comp> pq;
        for(int i=0;i<k;i++)
        {
            Triplet t(arr[i][0],i,0);
            
            pq.push(t);
        }
        
        while(!pq.empty())
        {
            Triplet curr = pq.top();
            //cout<<curr.val<<" ";
            pq.pop();
            res.push_back(curr.val);
            int ap=curr.apos;
            int vp=curr.vpos;
            if(vp+1<k)
            {
                Triplet t(arr[ap][vp+1],ap,vp+1);
                pq.push(t);
            }
        }
        return res;
    }
};
