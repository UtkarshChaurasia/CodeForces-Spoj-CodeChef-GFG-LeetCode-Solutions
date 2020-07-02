/*
Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).

For example:
Given binary tree [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7

return its bottom-up level order traversal as:

[
  [15,7],
  [9,20],
  [3]
]
*/

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> sol;
        if(!root)
            return sol;
        vector<int> v;
        int a=1,b=0,c=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            b++;
            TreeNode* temp=q.front();
            v.push_back(temp->val);
            q.pop();
            if(temp->left)
            {
                q.push(temp->left);
                c++;
            }
            if(temp->right)
            {
                q.push(temp->right);
                c++;
            }
            if(a==b)
            {
                sol.push_back(v);
                v.clear();
                a=c;
                b=0;
                c=0;
            }
        }
        reverse(sol.begin(),sol.end());
        return sol;
    }
};
