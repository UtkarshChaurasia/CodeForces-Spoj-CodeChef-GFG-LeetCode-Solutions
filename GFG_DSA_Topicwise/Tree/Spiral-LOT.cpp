/*
Complete the function to find spiral order traversal of a tree. For below tree, function should return 1, 2, 3, 4, 5, 6, 7.

Example 1:

Input:
      1
    /   \
   3     2
Output:1 3 2

Example 2:

Input:
           10
         /     \
        20     30
      /    \
    40     60
Output: 10 20 30 60 40 
Your Task:
The task is to complete the function findSpiral() which takes root node as input parameter and returns the elements in spiral form of level order traversal as a list. The newline is automatically appended by the driver code.
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

vector<int> findSpiral(Node *root)
{
    //Your code here
    vector<int> res;
    if(root==NULL)
    {
        
        return res;
    }
    
    queue<Node*> q;
    q.push(root);
    int count = 0;
    while(1)
    {
        
        
        int size = q.size();
        if(size==0)
        {
            break;
        }
        vector<int> level;
        
        while(size>0)
        {
            Node* curr = q.front();
            q.pop();
            level.push_back(curr->data);
            if(curr->left!=NULL)
                q.push(curr->left);
                
            if(curr->right!=NULL)
                q.push(curr->right);
                
            size--;
        }
        if(count&1 || count==0)
        {
            for(int i=0;i<level.size();i++)
            {
                res.push_back(level[i]);
            }
        }
        
        else
        {
            for(int i=level.size()-1;i>=0;i--)
            {
                res.push_back(level[i]);
            }
        }
        count++;
    }
    return res;
}
