//PROBLEM: https://leetcode.com/problems/group-anagrams/


//Time: O(n*klogk)
//Another solution of O(n*k) exists in which we can use an array of frequency as key instead of sorting string and then using it as key.

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string> > mp;
        for(int i=0;i<strs.size();i++)
        {
            string s = strs[i];
            sort(s.begin(), s.end());
            mp[s].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto it : mp)
            ans.push_back(it.second);
        
        return ans;
        
    }
};