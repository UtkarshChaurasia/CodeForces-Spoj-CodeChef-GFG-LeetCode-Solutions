/*
Given a BST and an integer. Find the least absolute difference between any node value of the BST and the given integer.

Example 1:

Input:
        10
      /   \
     2    11
   /  \ 
  1    5
      /  \
     3    6
      \
       4
K = 13
Output: 2
Explanation: K=13. The node that has
value nearest to K is 11. so the answer
is 2
Example 2:

Input:
      8
    /   \
   1     9
    \     \
     4    10
    /
   3
K = 9
Output: 0
Explanation: K=9. The node that has
value nearest to K is 9. so the answer
is 0.
Your Task:
You don't need to read input or print anything. Your task is to complete the function minDiff() that takes the root of the BST and an integer K as its input 
and returns the minimum absolute difference between any node value of the BST and the integer K.

Expected Time Complexity: O(Height of the BST).
Expected Auxiliary Space: O(Height of the BST).
*/

int minDiff(Node *root, int K)
{
    //Your code here
    if(root==NULL) return 0;
    int ans = INT_MAX;
    while(root!=NULL)
    {
        ans = min(abs(root->data-K),ans);
        if(root->data==K) return 0;
        else if(root->data<K) root = root->right;
        else if(root->data>K) root=root->left;
    }
    return ans;
}
