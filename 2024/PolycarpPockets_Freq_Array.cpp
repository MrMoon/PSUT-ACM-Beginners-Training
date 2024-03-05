#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int a[n];
	for (int i = 0 ; i < n ; i = i + 1) {
		cin >> a[i];
	} 
	int cnt[101] = {};
	int mx = 1;
	for (int i = 0 ; i < n - 1 ; i = i + 1) {
		int x = a[i];
		cnt[x] = cnt[x] + 1;
	}
	for (int i = 0 ; i < 101 ; i = i + 1) {
		if (cnt[i] > mx) {
			mx = cnt[i];
		}
	}
	cout << mx << endl;
	return 0;
}
