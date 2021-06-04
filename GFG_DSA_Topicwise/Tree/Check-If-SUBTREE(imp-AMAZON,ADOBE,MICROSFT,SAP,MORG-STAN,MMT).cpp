/*
Given two binary trees with head reference as T and S having at most N nodes. The task is to check if S is present as subtree in T.
A subtree of a tree T1 is a tree T2 consisting of a node in T1 and all of its descendants in T1.

Example 1:

Input:
T:      1          S:   3
      /   \            /
     2     3          4
   /  \    /
  N    N  4
Output: 1 
Explanation: S is present in T

Example 2:

Input:
T:      26         S:   26
       /   \           /  \
     10     N        10    N
   /    \           /  \
   20    30        20  30
  /  \            /  \
 40   60         40  60
Output: 1 
Explanation: 
S and T are both same. Hence, 
it can be said that S is a subtree 
of T.
Your Task:
You don't need to read input or print anything. Your task is to complete the function isSubtree() that takes root node of S and T as parameters 
and returns 1 if S is a subtree of T else 0.


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
 
void inorderStore(Node *root, vector<int> &inorder)
{
    if(root==NULL) 
    {
        inorder.push_back(-1);
        return;
    }
    inorderStore(root->left, inorder);
    inorder.push_back(root->data);
    inorderStore(root->right,inorder);
}


void preorderStore(Node *root, vector<int> &preorder)
{
    if(root==NULL) 
    {
        preorder.push_back(-1);
        return;
    }
    preorder.push_back(root->data);
    preorderStore(root->left, preorder);
    preorderStore(root->right,preorder);
}


bool checkSub(vector<int> a, vector<int> b)
{
    int i = 0, j = 0; 
    int n = a.size();
    int m = b.size();
 
    while (i < n && j < m) 
    { 
        if (a[i] == b[j]) 
        {
            i++; 
            j++; 
            if (j == m) 
                return true; 
        }
        else
        { 
            i = i - j + 1; 
            j = 0; 
        } 
    }
    return false;
}


bool isSubTree(Node* T, Node* S) {
    // Your code here
    // return 1 if S is subtree of T else 0
    if(S==NULL) return true;
    if(T==NULL) return false;
    
    vector<int> inT;
    vector<int> preT;
    vector<int> inS;
    vector<int> preS;
    
    inorderStore(T,inT);
    inorderStore(S,inS);
    preorderStore(T,preT);
    preorderStore(S,preS);
    
    if(checkSub(inT, inS) && checkSub(preT, preS)) return true;
    return false;
}
