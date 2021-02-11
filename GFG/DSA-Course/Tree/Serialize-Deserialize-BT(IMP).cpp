/*
Serialization is to store a tree in an array so that it can be later restored and Deserialization is reading tree back from the array. Now your task is to 
complete the function serialize which stores the tree into an array A[ ] and deSerialize which deserializes the array to tree and returns it.
Note: The structure of tree must be maintained.

Example 1:

Input:
      1
    /   \
   2     3
Output: 2 1 3
Example 2:

Input:
         10
       /    \
      20    30
    /   \
   40  60
Output: 40 20 60 10 30
Your Task:
The task is to complete two function serialize which takes the root node of the tree as input andstores the tree into an array and deSerialize which
deserializes the array to the original tree and returns the root of it.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).


*/

class Solution{

public:

void serialUtil(Node *root, vector<int> &A)
{
    if(root==NULL) 
    {
        A.push_back(-1);
        return;
    }
    A.push_back(root->data);
    serialUtil(root->left,A);
    serialUtil(root->right,A);
}
vector<int> serialize(Node *root) {
    //Your code here
    vector<int> A;
    serialUtil(root, A);
    return A;
}
/*this function deserializes
 the serialized vector A*/
 Node * deSerialUtil(vector<int> &A,int& index)
 {
     if(index == A.size()) return NULL;
     int val = A[index];
     index++;
     Node * root = new Node(val);
     root->left = deSerialUtil(A,index);
     root->right = deSerialUtil(A,index);
     return root;
 }
Node * deSerialize(vector<int> &A)
{
   //Your code here
   int index = 0
   Node * ans = deSerialUtil(A,index);
   return ans;
}
