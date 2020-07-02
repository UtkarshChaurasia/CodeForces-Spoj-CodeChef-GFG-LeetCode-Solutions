
/*FORMULA APPROACH*/

int binomialCoeff(unsigned int n, unsigned int k) 
{ 
    int res = 1; 
    if (k > n - k) 
        k = n - k; 
    for (int i = 0; i < k; ++i) 
    { 
        res *= (n - i); 
        res /= (i + 1); 
    } 
  
    return res; 
} 

int catalan(unsigned int n) 
{ 
    int c = binomialCoeff(2*n, n); 
    return c/(n+1); 
} 



/*RECURSIVE SOLUTION*/
int catalan(unsigned int n) 
{ 
    // Base case 
    if (n <= 1) return 1; 
  
    // catalan(n) is sum of catalan(i)*catalan(n-i-1) 
    int res = 0; 
    for (int i=0; i<n; i++) 
        res += catalan(i)*catalan(n-i-1); 
  
    return res; 
} 


/*DP APPROACH*/

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


