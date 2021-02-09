/*
Given a Linked List Representation of Complete Binary Tree. The task is to construct the Binary tree.
Note : The complete binary tree is represented as a linked list in a way where if root node is stored at position i, its left, and right children are stored 
at position 2*i+1, 2*i+2 respectively.
Example 1:

Input:
N = 5
K = 1->2->3->4->5
Output: 1 2 3 4 5
Explanation: The tree would look like
      1
    /   \
   2     3
 /  \
4   5
Now, the level order traversal of
the above tree is 1 2 3 4 5.
Example 2:

Input:
N = 5
K = 5->4->3->2->1
Output: 5 4 3 2 1
Explanation: The tree would look like
     5
   /  \
  4    3
 / \
2    1
Now, the level order traversal of
the above tree is 5 4 3 2 1.
Your Task:
The task is to complete the function convert() which takes head of linked list and root of the tree as the reference. The driver code prints the level order.
*/


struct Node
{
    int data;
    struct node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
The structure of TreeNode is as follows
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
};


/*You are required to complete this method*/
void convert(Node *head, TreeNode *&root) {
    // Your code here
    if(head==NULL)
    {
        root==NULL;
        return;
    }
    queue<TreeNode*> q;
    root = new TreeNode(head->data);
    q.push(root);
    head = head->next;
    while(head)
    {
        TreeNode* curr = q.front();
        q.pop();
        TreeNode* leftc = NULL;
        TreeNode* rightc = NULL;
        
        leftc = new TreeNode(head->data);
        q.push(leftc);
        head = head->next;
        if(head)
        {
            rightc = new TreeNode(head->data);
            q.push(rightc);
            head = head->next;
        }
        
        curr->left = leftc;
        curr->right = rightc;
        
    }
}
