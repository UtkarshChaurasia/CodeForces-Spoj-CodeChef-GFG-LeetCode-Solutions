/*
Given a Binary Tree with all unique values and two nodes value n1 and n2. The task is to find the lowest common ancestor of the given two nodes. 
We may assume that either both n1 and n2 are present in the tree or none of them is present. 

Example 1:

Input:
n1 = 2 , n2 =  3
     1
   /  \
  2    3
Output: 1
Explanation:
LCA of 2 and 3 is 1.
Example 2:

Input:
n1 = 3 , n2 = 4
         5
        /
       2
     /  \
    3    4
Output: 2
Explanation: 
LCA of 3 and 4 is 2. 

Your Task:
You don't have to read input or print anything. Your task is to complete the function lca() that takes nodes, n1, and n2 as parameters and returns LCA 
node as output.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(H).
Note: H is the height of the tree.
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

/* If n1 and n2 are present, return pointer
   to LCA. If both are not present, return 
   NULL. Else if left subtree contains any 
   of them return pointer to left.*/

Node* lca(Node* root ,int n1 ,int n2 )
{
   //Your code here 
   if(root==NULL) return NULL;
   
   if(root->data==n1 || root->data == n2) return root;
   
   Node* lca1 = lca(root->left,n1,n2);
   Node* lca2 = lca(root->right,n1,n2);
   
   if(lca1!=NULL && lca2!=NULL) return root;
   
   if(lca1!=NULL) return lca1;
   
   else return lca2;
   
}
