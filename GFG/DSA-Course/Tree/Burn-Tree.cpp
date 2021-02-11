/*
Given a binary tree denoted by root node A and a leaf node B from this tree.

It is known that all nodes connected to a given node (left child, right child and parent) get burned in 1 second. Then all the nodes which are connected 
through one intermediate get burned in 2 seconds, and so on.

You need to find the minimum time required to burn the complete binary tree.

Problem Constraints
2 <= number of nodes <= 105

1 <= node value, B <= 105

node value will be distinct

Input Format
First argument is a root node of the binary tree, A.

Second argument is an integer B denoting the node value of leaf node.

Output Format
Return an integer denoting the minimum time required to burn the complete binary tree.



Example Input
Input 1:

 Tree :      1 
            / \ 
           2   3 
          /   / \
         4   5   6
 B = 4
Input 2:

 Tree :      1
            / \
           2   3
          /     \
         4       5 
 B = 5 

Example Output
Output 1:

 4
Output 2:
 4
 */

int burnTree(TreeNode* A,int leaf, int& dist,int& res)
 {
     if(A==NULL) return 0;
     if(A->val==leaf)
     {
         dist = 0;
         return 1;
     }
     int ldist = -1,rdist = -1;
     int lh = burnTree(A->left,leaf,dist,res);
     int rh = burnTree(A->right,leaf,dist,res);
     
     if(ldist!=-1)
     {
         dist=ldist+1;
         res = max(res,dist+rh);
     }
     else if(rdist!=-1)
     {
         dist = rdist+1;
         res = max(res,dist+lh);
     }
     
     return max(lh,rh)+1;
     
 }
 
int Solution::solve(TreeNode* A, int B) {
    int dist = 0;
    int res= 0;
    dist = burnTree(A,B,dist,res);
    return dist;
}
