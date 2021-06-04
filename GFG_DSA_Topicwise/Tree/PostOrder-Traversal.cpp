struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};


void recPostorder(Node* root, vector<int> &res)
{
    if(root==NULL)return;
    recPostorder(root->left,res);
    recPostorder(root->right, res);
    res.push_back(root->data);
}


vector <int> postOrder(Node* root)
{
  vector<int> res;
  recPostorder(root, res);
  return res;
}
