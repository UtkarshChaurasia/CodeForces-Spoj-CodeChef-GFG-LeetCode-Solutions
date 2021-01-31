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

void recPreorder(Node* root, vector<int> &res)
{
    if(root==NULL)return;
    res.push_back(root->data);
    recPreorder(root->left, res);
    recPreorder(root->right, res);
}

vector <int> preorder(Node* root)
{
  vector<int> res;
  recPreorder(root, res);
  return res;
}
