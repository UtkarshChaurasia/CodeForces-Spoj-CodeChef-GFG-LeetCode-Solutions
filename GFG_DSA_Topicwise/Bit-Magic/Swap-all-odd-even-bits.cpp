#include<iostream>
#define ll long long
using namespace std;


unsigned int swapBits(unsigned int x)  
{  
    // Get all even bits of x  
    unsigned int even_bits = x & 0xAAAAAAAA;  
  
    // Get all odd bits of x  
    unsigned int odd_bits = x & 0x55555555;  
  
    even_bits >>= 1; // Right shift even bits  
    odd_bits <<= 1; // Left shift odd bits  
  
    return (even_bits | odd_bits); // Combine even and odd bits  
}  



int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    cout<<swapBits(x)<<endl;
	}
	return 0;
}
