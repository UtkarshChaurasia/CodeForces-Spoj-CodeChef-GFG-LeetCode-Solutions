/*
Separate chaining technique in hashing allows to us to use a linked list at each hash slot to handle the problem of collisions.
That is, every slot of the hash table is a linked list, so whenever a collision occurs, the element can be appened as a node to the
linked list at the slot.

In this question, we'll learn how to fill up the hash table using Separate chaining technique. Given an array and a hashtable size, 
you have to fill the elements of the array into a hash table of given size. 

Example 1:

Input:
hashSize = 10
sizeOfArray = 6
arr[] = {92,4,14,24,44,91}
Output:
1->91
2->92
4->4->14->24->44
Explanation: 92%10=2 so 92 goes to slot 2.
4%10=4 so 4 goes to slot 4. 14%10=4. But 4
is already occupied so we make a linked
list at this position and add 14 after 4 
in slot 4 and so on.

Example 2:

Input:
hashSize = 10
sizeOfArray = 5
arr[] = {12,45,36,87,11}
Output:
1->11
2->12
5->45
6->36
7->87
Explanation: 12%10=2 so 12 goes to slot 2.
45%10=5 goes to slot 5. 36%10=6 goes to
slot 6. 87%10=7 goes to slot 7 and finally
11%10=1 goes to slot 1.

Your Task:
This is a function problem. You need to complete the function separateChaining that takes hashSize, arr, and sizeOfArr as parameters, 
inserts elements of arr in the hashTable at positions by using arr[i]%hashSize and then returns the has table. The printing is done automatically 
by the driver code.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> separateChaining(int hashsize,int arr[],int sizeOfArray)
{
   vector<vector<int>> hashtable(hashsize);
   for(int i=0;i<sizeOfArray;i++)
   {
       hashtable[arr[i]%hashsize].push_back(arr[i]);
   }
   return hashtable;
   
}


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int hashSize;
	    cin>>hashSize;
	    
	    
	    int sizeOfArray;
	    cin>>sizeOfArray;
	    int arr[sizeOfArray];
	    
	    for(int i=0;i<sizeOfArray;i++)
	    cin>>arr[i];
	    
	    vector<vector<int>> hashTable;
	    hashTable = (separateChaining( hashSize, arr, sizeOfArray));
	    
	    for(int i=0;i<hashTable.size();i++)
	    {
	        if(hashTable[i].size()>0)
	        {
	            cout<<i<<"->";
	            for(int j=0;j<hashTable[i].size()-1;j++)
	            {
	                cout<<hashTable[i][j]<<"->";
	            }
	            cout<<hashTable[i][hashTable[i].size()-1];
	            cout<<endl;
	        }
	    }
	    
	    
	    
	}
	return 0;
}
