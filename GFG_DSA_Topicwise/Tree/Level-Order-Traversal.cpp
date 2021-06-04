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
vector<int> levelOrder(Node* node)
{
  //Your code here
  vector<int> res;
  queue<Node*> q;
  q.push(node);
  
  while(!q.empty())
  {
      Node* curr = q.front();
      q.pop();
      res.push_back(curr->data);
      if(curr->left!=NULL)
      {
          q.push(curr->left);
      }
      if(curr->right!=NULL)
      {
          q.push(curr->right);
      }
  }
  
  return res;
}
