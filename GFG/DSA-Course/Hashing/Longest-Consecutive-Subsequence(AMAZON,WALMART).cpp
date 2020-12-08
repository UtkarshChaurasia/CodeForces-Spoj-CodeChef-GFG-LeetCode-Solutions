/*
Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, 
the consecutive numbers can be in any order.

Example 1:

Input:
N = 7
a[] = {2,6,1,9,4,5,3}
Output: 6
Explanation: The consecutive numbers 
here are 1, 2, 3, 4, 5, 6. These 6 
numbers form the longest consecutive
subsquence.
Example 2:

Input:
N = 7
a[] = {1,9,3,10,4,20,2}
Output: 4
Explanation: 1, 2, 3, 4 is the longest
consecutive subsequence.
Your Task:
You don't need to read input or print anything. Your task is to complete the function findLongestConseqSubseq() which takes the array arr[] and the size of 
the array as inputs and returns the length of the longest subsequence of consecutive integers. 

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

*/


#include <bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int N)
{
  map<int,int> mp;
  for(int i=0;i<N;i++)
  {
      mp[arr[i]]++;
  }
  int count=0,curr=0;
  int j = 0;
  for(auto it : mp)
  {
      if(j!=0 && (mp.find((it.first)-1)==mp.end()))
      {
          count = max(curr,count);
          curr=1;
      }
      else
      {
          curr++;
      }
      j++;
  }
  count = max(curr,count);
  return count;
}


int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  cout<<findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
