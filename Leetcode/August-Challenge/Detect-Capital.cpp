/*
Given a word, you need to judge whether the usage of capitals in it is right or not.

We define the usage of capitals in a word to be right when one of the following cases holds:

    All letters in this word are capitals, like "USA".
    All letters in this word are not capitals, like "leetcode".
    Only the first letter in this word is capital, like "Google".

Otherwise, we define that this word doesn't use capitals in a right way. 
*/

class Solution {
public:
    bool detectCapitalUse(string str) {
        int l = str.length();
        int countu = 0;
        for(int i = 0;i<l;i++)
        {
            if(isupper(str[i]))
            {
                countu++;
            }
        }
        if(countu==l)
        {
            return true;
        }
        else if(countu==0)
        {
            return true;
        }
        else if(countu==1 && isupper(str[0]))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
