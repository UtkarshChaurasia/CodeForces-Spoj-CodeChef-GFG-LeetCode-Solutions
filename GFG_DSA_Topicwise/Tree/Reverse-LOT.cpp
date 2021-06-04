struct Node
{
    int data;
    Node* left;
    Node* right;
};



vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> res;
    queue<Node*> q;
    
    q.push(root);
    stack<int> st;
    
    while(!q.empty())
    {
        Node* curr = q.front();
        q.pop();
        st.push(curr->data);
        if(curr->right!=NULL)
            q.push(curr->right);
            
        if(curr->left!=NULL)
            q.push(curr->left);
    }
    
    while(!st.empty())
    {
        int x  = st.top();
        st.pop();
        res.push_back(x);
    }
    return res;
}
