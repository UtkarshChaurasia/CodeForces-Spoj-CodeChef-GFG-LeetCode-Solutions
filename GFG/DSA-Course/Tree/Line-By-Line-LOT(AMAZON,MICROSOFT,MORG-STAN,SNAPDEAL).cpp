/*
Given a Binary Tree, your task is to find its level order traversal.
For the below tree the output will be 1 $ 2 3 $ 4 5 6 7 $ 8 $.

          1
       /     \
     2        3
   /    \     /   \
  4     5   6    7
    \
     8

Example 1:

Input:
          1
        /
       4
     /   \
    4     2
Output:1 $ 4 $ 4 2 $

Example 2:

Input:
            10
          /    \
        20      30
     /     \
    40     60
Output: 10 $ 20 30 $ 40 60 $
Your Task:
This is a function problem. You don't need to read input. Just complete the function levelOrder() that takes nodes as parameter and returns level order traversal as a 2D list.

Note: The driver code prints the levels '$' separated.
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
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

//You are required to complete this method
vector<vector<int>> levelOrder(Node* node)
{
  //Your code here
  vector<vector<int>> res;
  queue<Node*> q;
  q.push(node);
  while(1)
  {
      
        
      int size = q.size();
      if(size==0)
        break;
      vector<int> line;
      
      while(size>0)
      {
          Node* curr = q.front();
          line.push_back(curr->data);
          q.pop();
          
          if(curr->left!=NULL)
            q.push(curr->left);
            
          if(curr->right!=NULL)
            q.push(curr->right);
            
          size--;
      }
      res.push_back(line);
  }
  return res;
}
