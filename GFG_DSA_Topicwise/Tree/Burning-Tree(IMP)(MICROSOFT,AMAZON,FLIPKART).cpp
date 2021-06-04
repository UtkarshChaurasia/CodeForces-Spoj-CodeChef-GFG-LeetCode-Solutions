/*
Given a binary tree and a leaf node called target. Find the minimum time required to burn the complete binary tree if the target is set on fire. 
It is known that in 1 second all nodes connected to a given node get burned. That is, its left child, right child and parent.

Example 1:

Input :      
          1
        /   \
      2      3
    /  \      \
   4    5      6
       / \      \
      7   8      9
                   \
                   10

Target Node = 8
Output: 7
Explanation: If leaf with the value 
8 is set on fire. 
After 1 sec: 5 is set on fire.
After 2 sec: 2, 7 are set to fire.
After 3 sec: 4, 1 are set to fire.
After 4 sec: 3 is set to fire.
After 5 sec: 6 is set to fire.
After 6 sec: 9 is set to fire.
After 7 sec: 10 is set to fire.
It takes 7s to burn the complete tree.
Example 2:

Input :      
          1
        /   \
      2      3
    /  \      \
   4    5      7
  /    / 
 8    10
Target Node = 10
Output: 5
Your Task:  
You dont need to read input or print anything. Complete the function minTime() which takes the root of the tree and target as input parameters and 
returns minimum time required to burn the complete binary tree if the target is set on fire at the 0th second.


Expected Time Complexity: O(N)
*/

int depth(Node* root)
{
    if(root==NULL) return 0;
    return max(depth(root->left),depth(root->right))+1;
}


int burnTree(Node* root, int target, int &dist)
{
    if(root==NULL) return 0;
    
    if(root->data==target)
    {
        return 1;
    }
    
    int val = burnTree(root->left,target,dist);
    if(val)
    {
        dist = max(dist,val+depth(root->right));
        return val+1;
    }
    
    val = burnTree(root->right,target,dist);
    if(val)
    {
        dist = max(dist,val+depth(root->left));
        return val+1;
    }
    
    return 0;
}
