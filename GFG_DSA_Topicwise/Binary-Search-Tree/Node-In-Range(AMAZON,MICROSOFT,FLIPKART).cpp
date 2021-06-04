/*
Given a Binary Search Tree and a range. Find all the numbers in the BST that lie in the given range.
Note: Element greater than or equal to root go to the right side.

 

Example 1:

Input:
       17
     /    \
    4     18
  /   \
 2     9 
l = 4, h = 24
Output: 4 9 17 18 
Example 2:

Input:
       16
     /    \
    7     20
  /   \
 1    10
l = 13, h = 23
Output: 16 20 
Your Task:
You don't need to read input or print anything. Your task is to complete the function printNearNodes() which takes the root Node of the BST and the 
range elements low and high as inputs and returns an array that contains the BST elements in the given range low to high (inclusive) in non-decreasing order.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the BST).
*/

void printutil(Node *root, int low, int high, vector<int> &res)
{
    if(root==NULL) return;
    
    if(root->data>low) printutil(root->left,low,high,res);
    
    if(root->data>=low && root->data<=high) res.push_back(root->data);
    
    if(root->data<high) printutil(root->right,low,high,res);
}
vector<int> printNearNodes(Node *root, int low, int high)
{
  // your code goes here
  vector<int> res;
  printutil(root,low,high,res);
  return res;
}
