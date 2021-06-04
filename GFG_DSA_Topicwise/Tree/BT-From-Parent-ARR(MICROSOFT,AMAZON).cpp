/*
Given an array of size N that can be used to represents a tree. The array indexes are values in tree nodes and array values give the parent node of 
that particular index (or node). The value of the root node index would always be -1 as there is no parent for root. Construct the standard linked 
representation of Binary Tree from this array representation.

Example 1:

Input:
N = 7
parent[] = {-1,0,0,1,1,3,5}
Output: 0 1 2 3 4 5 6
Explanation: the tree generated
will have a structure like 
          0
        /   \
       1     2
      / \
     3   4
    /
   5
 /
6
 

Example 2:

Input:
N = 3
parent[] = {2, 0, -1}
Output: 2 0 1
Explanation: the tree generated will
have a sturcture like
               2
             /   
            0      
          /   
         1     
 

Your Task:
You don't need to read input or print anything. The task is to complete the function createTree() which takes 2 arguments parent[] and N and returns
the root node of the constructed tree.

 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
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

/*  Function which returns the  root of 
    the constructed binary tree. */
    
    
void createNode(int parent[],Node* created[], int i,Node **root)
{
    if(created[i]!=NULL) return;
    created[i] = new Node(i);
    if(parent[i]==-1)
    {
        *root = created[i];
        return;
    }
    if(created[parent[i]]==NULL)
    {
        createNode(parent, created, parent[i],root);
    }
    
    Node * p = created[parent[i]];
    if(p->left==NULL) p->left = created[i];
    else if(p->right==NULL) p->right = created[i];
    
}

Node *createTree(int parent[], int N)
{
    // Your code here
    Node* root = NULL;
    Node* created[N];
    for(int i=0;i<N;i++)
    {
        created[i]=NULL;
    }
    for(int i=0;i<N;i++)
    {
        createNode(parent,created,i,&root);
    }
    return root;
}
