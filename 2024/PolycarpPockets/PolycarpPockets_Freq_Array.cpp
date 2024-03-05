#include <iostream>

using namespace std;

int main() {
	// Read the the number of coins
	int n;
	cin >> n;
	
	// Read the coins
	int coins[n];
	for (int i = 0 ; i < n ; i = i + 1) {
		cin >> coins[i];
	}

	// Create a frequency array with size 101 (the values of coins are from 1 to 100) 
	int cnt[101] = {};
	for (int i = 0 ; i < n ; i = i + 1) {
		int x = coins[i];
		cnt[x] = cnt[x] + 1;
	}

	// Find the coin that was repeated the most 
	int mx = 1;
	for (int i = 0 ; i < 101 ; i = i + 1) {
		if (cnt[i] > mx) {
			mx = cnt[i];
		}
	}
	cout << mx << endl;
	return 0;
}
