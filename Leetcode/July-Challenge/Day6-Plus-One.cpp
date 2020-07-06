
class Solution 
{
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        vector<int> result;
        stack<int> sum;
        int plusNumber=1;
        for(int i=digits.size()-1;i>=0;i--)
        {
            int cur=digits[i]+plusNumber;
            sum.push(cur%10);
            plusNumber=cur>=10?1:0;
        }
        if(plusNumber) sum.push(1);
        while(!sum.empty())
        {
            result.push_back(sum.top());
            sum.pop();
        }
        return result;
    }
};
