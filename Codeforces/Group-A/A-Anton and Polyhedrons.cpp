#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,sum=0;
    string str;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>str;
        if(str=="Tetrahedron")
        {
            sum=sum+4;
        }
        else if(str=="Cube")
        {
            sum=sum+6;
        }
        else if(str=="Octahedron")
        {
            sum=sum+8;
        }
        else if(str=="Dodecahedron")
        {
            sum=sum+12;
        }
        else if(str=="Icosahedron")
        {
            sum=sum+20;
        }
        str="";
    }
    cout<<sum;
    return 0;
}
