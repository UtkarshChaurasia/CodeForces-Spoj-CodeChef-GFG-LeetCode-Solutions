#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n], b[2] = {0, 0};
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			b[a[i] % 2]++;
		}
		sort(a, a + n);
		int c = 0;
		for (int i = 0; i < n - 1; i++) {
			if (a[i] == a[i + 1] - 1) {
				c++;
			}
		}
		if (b[0] % 2 == 0 || c)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
