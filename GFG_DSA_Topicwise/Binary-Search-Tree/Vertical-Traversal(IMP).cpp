/*
Given a Binary Tree, find the vertical traversal of it starting from the leftmost level to the rightmost level.
If there are multiple nodes passing through a vertical line, then they should be printed as they appear in level order traversal of the tree.

Example 1:

Input:
     2
      \
       3
      /
     4
Output: 2 4 3
Example 2:

Input:
       1
    /    \
   2      3
 /   \      \
4     5      6
Output: 4 2 1 5 3 6
Your Task:
You don't need to read input or print anything. Your task is to complete the function verticalOrder() which takes the root node as input and returns an 
array containing the vertical order traversal of the tree from the leftmost to the rightmost level. If 2 nodes lie in the same vertical level, they should 
be printed in the order they appear in the level order traversal of the tree.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
*/

void util(Node *root, vector<int> &res)
{
    if(root==NULL) return;
    queue<pair<Node*,int>> q;
    map<int,vector<int>> mp;
    q.push({root,0});
    
    while(!q.empty())
    {
        pair<Node*,int> curr = q.front();
        q.pop();
        int dist = curr.second;
        mp[dist].push_back(curr.first->data);
        if(curr.first->left!=NULL)
        {
            q.push({curr.first->left,dist-1});
        }
        if(curr.first->right!=NULL)
        {
            q.push({curr.first->right,dist+1});
        }
    }
    for(auto it:mp)
    {
        for(int i=0;i<it.second.size();i++)
        {
            res.push_back(it.second[i]);
        }
    }
    
}


vector<int> verticalOrder(Node *root)
{
    //Your code here
    vector<int> res;
    util(root,res);
    return res;
}
