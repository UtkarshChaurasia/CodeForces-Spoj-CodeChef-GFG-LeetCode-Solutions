/*
Given a string S such that it may contain repeated lowercase alphabets. Rearrange the characters in the string such that no two adjacent characters are same.
 

Example 1:

Input:
S = geeksforgeeks
Output: 1
Explanation: egeskerskegof can be one way of
rearranging the letters.

Example 2:

Input:
S = bbbabaaacd
Output: 1
Explanation: abababdcab can be one way of 
rearranging the letters.

Your Task:
You do not need to read input or print anything. Complete the function rearrangeString() which takes string S as input parameter and returns the string after 
rearrangement.
If the characters are successfully rearranged then the generated output will be 1 else 0.


Expected Time Complexity : O(n log n)
Expected Auxilliary Space : O(n)
*/

class Solution{
    struct Key
    {
        int freq;
        char ch;
        
        bool operator<(const Key &k) const
        {
            return freq<k.freq;
        }
    };
    public:
        string rearrangeString(string str){
    	// Your code here
    	int n=str.length();
    	priority_queue<Key> pq;
    	int count[26] = {0};
    	for(int i=0;i<n;i++) count[str[i]-'a']++;
    	
    	for(char c='a';c<='z';c++)
    	{
    	    if(count[c-'a'])
    	    {
    	        pq.push( Key { count[c-'a'],c} );
    	    }
    	}
    	
    	str="";
    	Key prev {-1,'#'};
    	
    	while(!pq.empty())
    	{
    	    Key k = pq.top();
    	    pq.pop();
    	    str+=k.ch;
    	    if(prev.freq>0)
    	    {
    	        pq.push(prev);
    	    }
    	    (k.freq)--;
    	    prev = k;
    	}
    	if(str.length()!=n)
    	{
    	    int ne = str.length();
    	    str+=str[ne-1];
    	}
    	return str;
    }
};
