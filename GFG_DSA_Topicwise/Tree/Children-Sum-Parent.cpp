/*
Given a Binary Tree. Check whether all of its nodes have the value equal to the sum of their child nodes.

Example 1:

Input:
     10
    /
  10 
Output: 1
Explanation: Here, every node is sum of
its left and right child.
Example 2:

Input:
       1
     /   \
    4     3
   /  \
  5    N
Output: 0
Explanation: Here, 1 is the root node
and 4, 3 are its child nodes. 4 + 3 =
7 which is not equal to the value of
root node. Hence, this tree does not
satisfy the given conditions.
Your Task:
You don't need to read input or print anything. Your task is to complete the function isSumProperty() that takes the root Node of the Binary Tree as 
input and returns 1 if all the nodes in the tree satisfy the following properties. Else, it returns 0.
For every node, data value must be equal to the sum of data values in left and right children. Consider data value as 0 for NULL child.  Also, leaves 
are considered to follow the property.

Expected Time Complexiy: O(N).
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


// Return 1 if all the nodes in the tree satisfy the given property. Else return 0
int isSumProperty(Node *root)
{
 // Add your code here
 int left_data = 0;
 int right_data = 0;
 if(root==NULL || (root->left==NULL && root->right==NULL))
 {
     return 1;
 }
 else
 {
     
     if(root->left!=NULL)
        left_data = root->left->data;
     
     if(root->right!=NULL)
        right_data = root->right->data;
     
     if((left_data+right_data==root->data) && isSumProperty(root->left) && isSumProperty(root->right))
     {
         return 1;
     }
     else
     {
         return 0;
     }
 }
 
}
