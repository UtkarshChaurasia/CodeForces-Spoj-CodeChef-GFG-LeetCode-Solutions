
 
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


void recInorder(Node* root, vector<int> &res)
{
    if(root==NULL)
    {
        return;
    }
    recInorder(root->left,res);
    res.push_back(root->data);
    recInorder(root->right,res);
    
}

vector<int> inOrder(struct Node* root)
{

  vector<int> res;
  recInorder(root,res);
  return res;
}
