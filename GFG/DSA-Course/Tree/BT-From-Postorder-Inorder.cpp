/*
Given inorder and postorder traversals of a Binary Tree in the arrays in[] and post[] respectively. The task is to construct the binary tree from 
these traversals.

 

Example 1:

Input:
N = 8
in[] = 4 8 2 5 1 6 3 7
post[] =8 4 5 2 6 7 3 1
Output: 1 2 4 8 5 3 6 7
Explanation: For the given postorder and
inorder traversal of tree the  resultant
binary tree will be
           1
       /      \
     2         3
   /  \      /  \
  4    5    6    7
   \
     8
 

Example 2:

Input:
N = 5
in[] = 9 5 2 3 4
post[] = 5 9 3 4 2
Output: 2 9 5 4 3
Explanation:  
the  resultant binary tree will be
           2
        /     \
       9       4
        \     /
         5   3
 

Your Task:
You do not need to read input or print anything. Complete the function buildTree() which takes the inorder, postorder traversals and the number of 
odes in the tree as input parameters and returns the root node of the newly constructed Binary Tree.
The generated output contains the preorder traversal of the constructed tree.

 

Expected Time Complexity: O(N2)
Expected Auxiliary Space: O(N)

*/

static int postInd;
Node* fun(int in[], int post[], int start, int end)
{
    if(start>end) return NULL;
    
    Node* root = new Node(post[postInd--]);
    
    if(start==end) return root;
    
    int inInd;
    for(int i = start;i<=end;i++)
    {
        if(in[i]==root->data)
        {
            inInd = i;
            break;
        }
    }
    root->right = fun(in,post,inInd+1,end);
    root->left = fun(in,post,start,inInd-1);
    
    
    return root;
    
}


Node *buildTree(int in[], int post[], int n) {
    // Your code here
    postInd = n-1;
    //Node *root = NULL;
    Node* root = fun(in,post,0,n-1);
    return root;
}
