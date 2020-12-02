/*
Given an array arr[] of N numbers. The task is to print only those numbers whose digits are from set {1,2,3}.

Example 1:

Input:
N = 3
arr[] = {4,6,7}
Output: -1
Explanation: No elements are there in the 
array which contains digits 1, 2 or 3.
Example 2:

Input:
N = 4
arr[] = {1,2,3,4}
Output: 1 2 3
Explanation: 1, 2 and 3 are the only 
elements in the array which conatins 
digits as 1, 2 or 3.
Your Task:
Complete findAll function and marked satisfied number as '1' in the map mp in range 1 to 1000000. If no number is marked as satified number -1 will 
automatically be printed by the drivers code. The driver code prints the elements in sorted order.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(N)

*/


#include<bits/stdc++.h>
using namespace std;


bool checkDig(int n)
{
    int dig,count=0;
    unordered_map<int,int> fre;
    while(n>0)
    {
        dig = n%10;
        if(dig==1 || dig==2 || dig ==3)
        {
            fre[dig]++;
        }
        else
        {
            return false;
        }
        n = n/10;
     
    }
    return true;
}


map<int,int> mp;
void findAll() {

    for(int i=1;i<=1000000;i++)
    {
        if(checkDig(i))
        {
            mp[i]++;
        }
    }
    
}



int main()
{   
    findAll(); // find all such numbers whose digits are from set {1,2,3} from 1 to 1000000
    int t;
    cin>>t; 
    
    while(t--)
    {
        int n, flag=0;
        cin>>n; 
        
        int arr[n] ;
        
        for(int i=0;i<n;i++) // insert n elements
            cin >> arr[i]; 
        
        sort(arr,arr+n); // sort them
        
        for(int i = 0 ; i < n ; ++ i ) {
            if(mp[arr[i]]) { // if arr[i] is already there in the map then it satisfied else not 
                cout << arr[i] << " " ;
                flag=1;
            }
        }
        
        if(!flag)
            cout << "-1"; 
            
        cout<<endl;
    }
return 0;
}
