// Problem: https://leetcode.com/problems/longest-palindrome/


class Solution {
public:
    int longestPalindrome(string str) {
        unordered_map<int,int> mp;
        int n=str.length();
        for(int i=0;i<n;i++)
        {
            if((str[i]-65)<=26)
            {
                mp[str[i]-65]++;
            }
            if((str[i]-97)>=0)
            {
                mp[str[i]-97+26]++;
            }
        }
        int oddcount = 0;
        int evecount = 0;
        bool check = false;
        for(auto it : mp)
        {
            
            if(it.second%2!=0) 
            {
                if(it.second==1 && (!check))
                {
                    check = true;
                    oddcount++;
                }
                oddcount+=(it.second)-1;
            }
            else if(it.second%2==0) evecount+=it.second;
        }
        if(oddcount>0 && (!check)) oddcount++;
        int ans =oddcount+evecount;
        return ans;
    }
};