/*
Given a Binary Tree, find diameter of it.
The diameter of a tree is the number of nodes on the longest path between two end nodes in the tree. The diagram below shows two trees each with diameter 
nine, the leaves that form the ends of a longest path are shaded (note that there is more than one path in each tree of length nine, but no path longer than
nine nodes).



Example 1:

Input:
       1
     /  \
    2    3
Output: 3
Example 2:

Input:
         10
        /   \
      20    30
    /   \ 
   40   60
Output: 4
Your Task:
You need to complete the function diameter() that takes root as parameter and returns the diameter.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).
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

/* Computes the diameter of binary tree with given root.  */

int height(Node* root,int& res) {
    
    if(root==NULL) return 0;
    
    int hl = height(root->left,res);
    int hr = height(root->right,res);
    
    res = max(res,hl+hr+1);
    
    return 1+max(hl,hr);
}

int diameter(Node* root)
{
    int res = 0;
    int x = height(root,res);
    return res;
}
