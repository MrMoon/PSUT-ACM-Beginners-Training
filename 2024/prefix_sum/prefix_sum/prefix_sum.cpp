#include <bits/stdc++.h>

using namespace std;

int main() {
	// To find a sum between l and r, we define an array prefix, 
	// such that prefix[i] is the sum between a[0] + ... + a[i]
	int n, q;
	cin >> n >> q; // n = size of the array, q is the number of queries.
	vector<int> a(n);
	vector<int> prefix(n + 1, 0); // prefix array 1-indexed, filled with all zeros.
	for (int i = 0 ; i < n ; ++i)
		cin >> a[i];

	// ex: the sum of prefix[3] = prefix[2] + a[2] (prefix[2] holds the sum of the two elements).
	for (int i = 0 ; i < n ; ++i)
		prefix[i + 1] = prefix[i] + a[i]; 

	while (q--) {
		int l, r;
		cin >> l >> r;
		// the sum of a[l] + a[l + 1] + ... + a[r] 
		// = (sum of a[0] + a[1] + ... + a[r]) - (sum of a[0] + a[1] + ... + a[l - 1])
		cout << prefix[r] - prefix[l - 1] << endl;  
	}
	return 0;
}
