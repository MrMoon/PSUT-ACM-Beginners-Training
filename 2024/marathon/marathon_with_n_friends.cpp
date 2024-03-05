#include <iostream>

using namespace std;

int main() {
	int t, x, counter;
	cin >> t;
	for (int i = 0 ; i < t ; i = i + 1) {
		int n;
		cin >> n;
		int timur;
		cin >> timur;
		for (int j = 0 ; j < n - 1 ; j++) {
			cin >> x;
			if (x > timur) {
				counter = counter + 1;
			}
		}
		cout << counter << endl;
	}
	return 0;
}
