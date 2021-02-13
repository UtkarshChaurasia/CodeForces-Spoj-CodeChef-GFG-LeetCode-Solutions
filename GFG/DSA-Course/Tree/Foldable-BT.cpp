/*
Given a binary tree, check if the tree can be folded or not. A tree can be folded if left and right subtrees of the tree are structure wise same. 
An empty tree is considered as foldable.
Consider the below trees:
(a) and (b) can be folded.
(c) and (d) cannot be folded.


(a)
       10
     /    \
    7      15
     \    /
      9  11
(b)
        10
       /  \
      7    15
     /      \
    9       11
(c)
        10
       /  \
      7   15
     /    /
    5   11
(d)
         10
       /   \
      7     15
    /  \    /
   9   10  12
 
Example 1:

Input:
     10
    /    \
   7     15
 /  \   /  \
N   9  11   N
Output:Yes
Example 2:

Input:
      10
    /    \
   7     15
 /  \   /  \
5   N  11   N
Output: No

Your Task:
The task is to complete the function isFoldable() that takes root of the tree as input and returns true or false depending upon whether the tree is 
foldable or not.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).
*/

bool foldableUtil(Node* n1, Node* n2)
{
    if(n1==NULL && n2==NULL) return true;
    if(n1==NULL || n2==NULL) return false;
    return(foldableUtil(n1->left,n2->right) && foldableUtil(n1->right,n2->left));
}

bool IsFoldable(Node* root)
{
    // Your code goes here
    if(root==NULL) return true;
    return foldableUtil(root->left,root->right);
}
