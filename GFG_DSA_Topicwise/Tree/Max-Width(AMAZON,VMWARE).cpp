/*
Given a Binary Tree, find the maximum width of it. Maximum width is defined as the maximum number of nodes in any level.
For example, maximum width of following tree is 4 as there are 4 nodes at 3rd level.

          1
       /     \
     2        3
   /    \    /    \
  4    5   6    7
    \
      8

Example 1:

Input:
       1
     /    \
    2      3
Output: 2
Example 2:

Input:
        10
      /     \
    20      30
   /    \
  40    60
Output: 2
Your Task:
You don't have to read any input. Just complete the function getMaxWidth() that takes node as parameter and returns the maximum width. The printing is 
done by the driver code.

Expected Time Complexity: O(N).
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

/* Function to get the maximum width of a binary tree*/
int getMaxWidth(Node* root)
{
   // Your code here
   if(root==NULL) return 0;
   queue<Node*> q;
   q.push(root);
   int maxi = 0;
   while(!q.empty())
   {
       int size = q.size();
       
       int count = 0;
       while(size>0)
       {
           Node* curr = q.front();
           q.pop();
           if(curr->left!=NULL)
           {
               q.push(curr->left);
           }
           if(curr->right!=NULL)
           {
               q.push(curr->right);
           }
           count++;
           size--;
       }
       maxi = max(maxi,count);
   }
   return maxi;
}

/*LEETCODE VARIATION - COUNT NULL ALSO
The width of one level is defined as the length between the end-nodes (the leftmost and right most non-null nodes in the level, where the null nodes 
between the end-nodes are also counted into the length calculation.

It is guaranteed that the answer will in the range of 32-bit signed integer.

Example 1:

Input: 

           1
         /   \
        3     2
       / \     \  
      5   3     9 

Output: 4
Explanation: The maximum width existing in the third level with the length 4 (5,3,null,9).*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        size_t maxi = 1;
        queue<pair<TreeNode*,size_t>> q;
        if(root==NULL)
            return 0;
        q.push({root,0});
        
        while(!q.empty())
        {
            maxi = max(maxi,q.back().second-q.front().second+1);
            int size = q.size();
            while(size>0)
            {
                TreeNode* curr = q.front().first;
                size_t idx = q.front().second;
                q.pop();
                if(curr->left!=NULL)
                    q.push({curr->left,idx*2});
                
                if(curr->right!=NULL)
                    q.push({curr->right,(idx*2)+1});
                
                size--;
            }
        }
        
        return maxi;
    }
};
