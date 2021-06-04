/*
Given a Binary Search Tree and a target sum. Check whether there's a pair of Nodes in the BST with value summing up to the target sum. 

Example 1:

Input:
        2
      /   \
     1     3
sum = 5
Output: 1 
Explanation: 
Nodes with value 2 and 3 sum up to 5.
Example 2:

Input:
           6
          /    
         5     
        /
       3 
     /  \
    1    4
sum = 2
Output: 0 
Explanation: 
There's no pair that sums up to 2.
 

Your Task:
You don't need to read input or print anything. Your task is to complete the function isPairPresent() that takes a root node and a target value as 
a parameter and returns 1 if there's a pair of Nodes in the BST with values summing up to the target sum, else returns 0. 

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the BST).
*/
int isPairPresent(struct Node *root, int target)
{
    stack<Node*> l,r;
    Node *c = root;
    while(c!=NULL)
    {
        l.push(c);
        c=c->left;
    }
    c = root;
    while(c!=NULL)
    {
        r.push(c);
        c=c->right;
    }
    int ldata,rdata;
    while(l.top()!=r.top())
    {
        ldata = l.top()->data;
        rdata = r.top()->data;
        if(ldata+rdata == target) return true;
        
        else if(ldata+rdata<target)
        {
            c = l.top()->right;
            l.pop();
            while(c!=NULL)
            {
                l.push(c);
                c=c->left;
            }
        }
        else if(ldata+rdata>target)
        {
            c = r.top()->left;
            r.pop();
            while(c!=NULL)
            {
                r.push(c);
                c = c->right;
            }
        }
    }
    return false;
}
