#include<bits/stdc++.h>
using namespace std;

void smallest(string s, string t)
{
    if(s.size()<t.size()) 
    {
        cout<<"-1\n";
        return;
    }
    int required[256]={0},i,size;
    for(i=0;i<t.size();i++) required[t[i]]++;
    size = t.size();
    int found[256]={0};
    for(i=0;i<s.size();i++)
    {
        if(found[s[i]]<required[s[i]]) size--;
        found[s[i]]++;
        if(size==0) break;
    }
    if(size>0 and i==s.size())
    {
        cout<<"-1\n";
        return;
    }
    if(t.size()==1)
    {
        cout<<t<<"\n";
        return;
    }
    int right=i;
    int left=0;
    int min_size=right;
    int start=0;
    int end=i;
    //cout<<start<<" "<<end<<"-"<<left<<" "<<right<<"\n";
    while(left<s.size()-t.size())
    {
        if(found[s[left]]>required[s[left]]) 
        {
            found[s[left]]--;
            left++;
            
            if(right-left<min_size)
            {
            	min_size=right-left;
                start=left;
                end=right;
			}
        }
        else
        {
            right++;
            found[s[right]]++;
            while(s[left]!=s[right] && right<s.size())
            {
            	right++;
                found[s[right]]++;
            }
            if(right==s.size())
            {
                for(i=start;i<=end;i++) cout<<s[i];
                cout<<endl;
                return;
            }
            found[s[left]]--;
            left++;
            if(right-left<min_size)
            {
                min_size=right-left;
                start=left;
                end=right;
            }
        }
    }
}

int main() 
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    string s;
	    string t;
	    cin>>s>>t;
	    smallest(s,t);
	}
	return 0;
}
