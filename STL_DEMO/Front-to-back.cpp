/*Iterators are used to iterate over vectors, maps, sets etc. Here we will learn to iterate over a vector from begin to end.
You are given a vector V of size n. You need print its elements.

Input Format:
The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains two lines of input. The first line contains n denoting the size of the array. The second line contains the elements of the vector.

Output Format:
For each testcase, in a new line, print the required output.

Your Task:
Since this is a function problem, you don't need to take any input. Just complete the function iter() that takes two iterators as parameters.

Constraints:
1 <= T <= 100
1 <= n <= 107
0 <= Vi <= 107

Examples:
Input:
1
5
1 2 3 4 5
Output:
1 2 3 4 5
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void iter(vector<int>::iterator it1,vector<int>::iterator it2);

void iter(vector<int>::iterator it1,vector<int>::iterator it2)
{
    //Your code here. Use iterator to print all the elements
    for(auto x=it1;x!=it2;x++)
    {
        cout<<*x<<" "; //print the element at xth address
    }
    cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x);
	    }
	    
	    iter(v.begin(),v.end()); //passing begin and end addresses of vector to the function
	   
	}
	return 0;
}
