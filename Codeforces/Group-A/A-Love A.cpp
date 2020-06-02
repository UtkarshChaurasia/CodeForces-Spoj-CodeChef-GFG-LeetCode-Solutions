#include<bits/stdc++.h>
using namespace std;
int main () {
string s;
int a;
cin>>s;
int start=0;
int counter=0;
for(int i=0;i<s.size();i++){
  if(s[i]=='a')
            counter++;

}
if(counter > s.size()/2){
    cout<<s.size();
}
else{
    cout<<(counter*2 -1);
}

}
