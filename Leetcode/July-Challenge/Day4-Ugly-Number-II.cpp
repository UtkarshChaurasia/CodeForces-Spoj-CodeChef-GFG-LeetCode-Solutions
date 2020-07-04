class Solution {
public:
    int nthUglyNumber(int n) {        
        if(n < 1) return 0;
        if(n == 1) return n;
        vector<int> a(n, 1);
        int i = 0, j = 0, k = 0;
        
        for(int it = 1; it < n; it++) {
            a[it] = min({a[i] * 2, a[j] * 3, a[k] * 5});
            if(a[it] == a[i] * 2) i++;
            if(a[it] == a[j] * 3) j++;
            if(a[it] == a[k] * 5) k++;
        }
        
        return a[n-1];
    }
};
