/*
Given an expression string x. Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
For example, the function should return 'true' for exp = “[()]{}{[()()]()}” and 'false' for exp = “[(])”.

Example 1:

Input:
{([])}

Output: 
true

Explanation: 
{ ( [ ] ) }. Same colored brackets can form 
balaced pairs, with 0 number of 
unbalanced bracket.
Example 2:

Input: 
()

Output: 
true

Explanation: 
(). Same bracket can form balanced pairs, 
and here only 1 type of bracket is 
present and in balanced way.
Example 3:

Input: 
([]

Output: 
false

Explanation: 
([]. Here square bracket is balanced but 
the small bracket is not balanced and 
Hence , the output will be unbalanced.
Your Task:
This is a function problem. You only need to complete the function ispar() that takes a string as a parameter and returns a boolean value true 
if brackets are balanced else returns false. The printing is done automatically by the driver code.

Expected Time Complexity: O(|x|)
Expected Auixilliary Space: O(|x|)
*/



#include<bits/stdc++.h>
using namespace std;

// Function to return if the paranthesis are balanced or not
bool ispar(string str)
{
    // Your code here
    int bo=0,bc=0,eo=0,ec=0,fo=0,fc=0;
    stack<char> s;
    for(int i=0;i<str.length();i++)
    {

        if(str[i]=='(' || str[i]=='[' || str[i]=='{')
        {
            s.push(str[i]);
        }
        else
        {
            if((!s.empty())&&((str[i]==')' && s.top()=='(') || (str[i]=='}' && s.top()=='{') || (str[i]==']' && s.top()=='[')))
            {
                s.pop();
            }
            else
            {
                return false;
            }
        }
        
    }
    if(!s.empty())
    {
        return false;
    }
    else
    {
        return true;
    }
}


int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       if(ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  
