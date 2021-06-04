/*
Given the root of a complete binary tree, return the number of the nodes in the tree.

According to Wikipedia, every level, except possibly the last, is completely filled in a complete binary tree, and all nodes in the last level are as far 
left as possible. It can have between 1 and 2h nodes inclusive at the last level h.

 

Example 1:


Input: root = [1,2,3,4,5,6]
Output: 6
Example 2:

Input: root = []
Output: 0
Example 3:

Input: root = [1]
Output: 1

Complexity: O(logN*logN)
*/

class Solution {
public:
    int countNodes(TreeNode* root) {
        int lh = 0,rh=0;
        if (root==NULL) return 0;
        TreeNode* curr = root;
        
        while(curr!=NULL)
        {
            lh++;
            curr=curr->left;
        }
        curr = root;
        while(curr!=NULL)
        {
            rh++;
            curr=curr->right;
        }
        
        if(lh==rh) return (pow(2,lh)-1);
        
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};
