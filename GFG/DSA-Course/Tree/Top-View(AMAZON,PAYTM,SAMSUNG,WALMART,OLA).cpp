/*
Given below is a binary tree. The task is to print the top view of binary tree. Top view of a binary tree is the set of nodes visible when the tree is 
viewed from the top. For the given below tree

       1
    /     \
   2       3
  /  \    /   \
4    5  6   7

Top view will be: 4 2 1 3 7
Note: Print from leftmost node to rightmost node.

Example 1:

Input:
      1
   /    \
  2      3
Output: 2 1 3

Example 2:

Input:
       10
    /      \
  20        30
 /   \    /    \
40   60  90    100
Output: 40 20 10 30 100
Your Task:
Since this is a function problem. You don't have to take input. Just complete the function printTopView() that takes root node as parameter and prints the 
top view. Print endline after end of printing the top view.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N).
*/

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

void topView(struct Node *root)
{
    //Your code here
    queue<pair<Node*,int>> q;
    if(root==NULL) return;
    q.push({root,0});
    map<int, int> mp;
    while(!q.empty())
    {
       
        Node* curr = q.front().first;
        int idx = q.front().second;
        if(mp.find(idx)==mp.end())
        {
            mp[idx]=curr->data;
        }
        q.pop();
        
        if(curr->left!=NULL) q.push({curr->left, idx-1});
        if(curr->right!=NULL) q.push({curr->right, idx+1});
        
        
    }
    for(auto it:mp)
    {
        cout<<it.second<<" ";
    }
    cout<<endl;
}
