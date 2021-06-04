/*
Given 2 Arrays of Inorder and preorder traversal. Construct a tree and print the Postorder traversal. 

Example 1:

Input:
N = 4
inorder[] = {1 6 8 7}
preorder[] = {1 6 7 8}
Output: 8 7 6 1
Example 2:

Input:
N = 6
inorder[] = {3 1 4 0 5 2}
preorder[] = {0 1 3 4 2 5}
Output: 3 4 1 5 2 0
Explanation: The tree will look like
       0
    /     \
   1       2
 /   \    /
3    4   5
Your Task:
Your task is to complete the function buildTree() which takes 3 arguments(inorder traversal array, preorder traversal array, and size of tree n) and returns the root node to the tree constructed. You are not required to print anything and a new line is added automatically (The post order of the returned tree is printed by the driver's code.)

Expected Time Complexity: O(N*N).
Expected Auxiliary Space: O(N).
*/

struct Node
{
  int data;
  Node* left;
  Node* right;
};

static int preInd;
Node* buildmain(int in[],int pre[],int start, int end)
{
    //static int preInd = 0; 
    if(start>end) return NULL;
    
    Node* root = new Node(pre[preInd++]);
    if(start==end) return root;
    int inInd;
    for(int i=start; i<=end;i++)
    {
        if(in[i]==root->data)
        {
            inInd = i;
            break;
        }
    }
    
    root->left = buildmain(in,pre,start, inInd-1);
    root->right = buildmain(in,pre,inInd+1,end);
    
    return root;
}


Node* buildTree(int in[],int pre[], int n)
{
    preInd = 0;
     Node* root = buildmain(in,pre,0,n-1);
     return root;
}
