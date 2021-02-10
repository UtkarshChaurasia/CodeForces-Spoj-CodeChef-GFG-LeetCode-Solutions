/*
Given a binary tree, connect the nodes that are at same level. You'll be given an addition nextRight pointer for the same.

Initially, all the nextRight pointers point to garbage values. Your function should set these pointers to point next right for each node.
       10                       10 ------> NULL
      / \                       /      \
     3   5       =>     3 ------> 5 --------> NULL
    / \     \               /  \           \
   4   1   2          4 --> 1 -----> 2 -------> NULL

 

Example 1:

Input:
     3
   /  \
  1    2
Output:
3 1 2
1 3 2
Explanation:The connected tree is
        3 ------> NULL
     /    \
    1-----> 2 ------ NULL
Example 2:

Input:
      10
    /   \
   20   30
  /  \
 40  60
Output:
10 20 30 40 60
40 20 60 10 30
Explanation:The connected tree is
         10 ----------> NULL
       /     \
     20 ------> 30 -------> NULL
  /    \
 40 ----> 60 ----------> NULL
Your Task:
You don't have to take input. Complete the function connect() that takes root as parameter and connects the nodes at same level. The printing is done by the 
driver code.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
*/

struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
};

// Should set the nextRight for all nodes
void connect(Node *p)
{
   // Your Code Here
   queue<Node*> q;
   q.push(p);
   Node* end=p, *nextend;
   Node* prev = NULL;
   
   while(!q.empty())
   {
       Node* temp = q.front();
       q.pop();
       if(temp->left) 
       {
           q.push(temp->left);
           nextend = temp->left;
       }
       if(temp->right) 
       {
           q.push(temp->right);
           nextend = temp->right;
       }
       
       if(prev)
       {
           prev->nextRight = temp;
       }
       
       if(temp==end)
       {
           temp->nextRight = NULL;
           end = nextend;
           prev = NULL;
       }
       else
       {
           prev = temp;
       }
       
   }
}
