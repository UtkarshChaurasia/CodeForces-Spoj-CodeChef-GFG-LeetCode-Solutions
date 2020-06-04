#include <boost/multiprecision/cpp_int.hpp> 
using boost::multiprecision::cpp_int; 
using namespace std; 

cpp_int catalan(int n){
    cpp_int cat[n+1];
    cat[0] = 1;
    cat[1] = 1; 
  
    for (int i=2; i<=n; i++) 
    { 
        cat[i] = 0; 
        for (int j=0; j<i; j++) 
            cat[i] += cat[j] * cat[i-j-1]; 
    } 
  

    return cat[n]; 
}


int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << catalan(n) << endl;
    }
    return 0;
}
