/*
Given a binary tree, determine if it is height-balanced.

For this problem, a height-balanced binary tree is defined as:

a binary tree in which the left and right subtrees of every node differ in height by no more than 1.
Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: true
Example 2:


Input: root = [1,2,2,3,3,null,null,4,4]
Output: false
Example 3:

Input: root = []
Output: true
*/


class Solution {
public:
    
    int helperFunc(TreeNode* root)
    {
        if(root==NULL) return 0;
        
        int l = helperFunc(root->left);
        int r = helperFunc(root->right);
        
        if(l==-1||r==-1||abs(l-r)>1) return -1;
        
        return (max(l,r)+1);
    }
    
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        
        if(helperFunc(root)>-1) return true;
        return false;
        
    }
};
