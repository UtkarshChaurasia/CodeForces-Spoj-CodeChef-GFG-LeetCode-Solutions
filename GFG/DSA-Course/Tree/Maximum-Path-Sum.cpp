/*
Given a binary tree, the task is to find the maximum path sum. The path may start and end at any node in the tree.

Example 1:

Input:
     10
    /  \
   2   -25
  / \  /  \
 20 1  3  4
Output: 32
Explanation: Path in the given tree goes
like 10 , 2 , 20 which gives the max
sum as 32.
Example 2:

Input:
     10
   /    \
  2      5
          \
          -2
Output: 17
Explanation: Path in the given tree goes
like 2 , 10 , 5 which gives the max sum
as 17.
Your Task:
You don't need to take input or print anything. Your task is to complete the function findMaxSum() that takes root as input and returns max sum between any 
two nodes in the given Binary Tree.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).
*/

int maxUtil(Node* root,int& res)
{
    if(root==NULL) return 0;
    
    int l = maxUtil(root->left,res);
    int r = maxUtil(root->right,res);
    
    int s1 = max(max(l,r)+root->data,root->data);
    int s2 = max(s1,l+r+root->data);
    
    res = max(res,s2);
    
    return s1;
}


int findMaxSum(Node* root)
{
    // Your code goes here
    int res = INT_MIN;
    maxUtil(root,res);
    return res;
}
