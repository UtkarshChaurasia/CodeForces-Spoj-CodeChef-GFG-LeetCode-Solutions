/*
Given a Binary Tree, print Left view of it. Left view of a Binary Tree is set of nodes visible when tree is visited from Left side. The task is to 
complete the function leftView(), which accepts root of the tree as argument.

Left view of following tree is 1 2 4 8.

          1
       /     \
     2        3
   /     \    /    \
  4     5   6    7
   \
     8   

Example 1:

Input:
   1
 /  \
3    2
Output: 1 3

Your Task:
You just have to complete the function leftView() that prints the left view. The newline is automatically appended by the driver code.
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


vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> res;
   if(root==NULL) return res;
   queue<Node*> q;
   q.push(root);
   
   
   while(!q.empty())
   {
       int temp = 0;
       int size = q.size();
       while(size>0)
       {
           
           Node* curr = q.front();
           q.pop();
           if(temp==0)
           {
               res.push_back(curr->data);
           }
           if(curr->left!=NULL) q.push(curr->left);
           if(curr->right!=NULL) q.push(curr->right);
           size--;
           temp++;
       }
   }
   return res;
}

//RECURSIVE SOLUTION

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

int maxLevel=0;
void printLeft(Node *root,int level){
    if(root==NULL)
        return;
    if(maxLevel<level){
        cout<<root->key<<" ";
        maxLevel=level;
    }
    printLeft(root->left,level+1);
    printLeft(root->right,level+1);
}

void printLeftView(Node *root){
    printLeft(root,1);
}
