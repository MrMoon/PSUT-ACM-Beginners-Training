#include <iostream>
#include <algorithm> // we have to include algorithms to use the sort()

using namespace std;

int main() {
	// Read the the number of coins
	int n;
	cin >> n;
	
	// Read the coins	
	int a[n];
	for (int i = 0 ; i < n ; i = i + 1) {
		cin >> a[i];
	} 
	// Sort the coins from smallest to biggest
	sort(a, a + n);

	// Find the most repeated coin in the array 
	int mx = 1;
	int counter = 1;

	for (int i = 0 ; i < n - 1 ; i = i + 1) {
		if (a[i] == a[i + 1]){ // since the array is sorted, numbers that are repeated are next to each other in the array
			++counter;
		} else { // if the numbers in i and i + 1 are not the same, different numbers, we reset the counter to 1 (because we're now counting for a new number)
			counter = 1;
		} 

		if (counter > mx) { // update the max
			mx = counter;
		}
	}
	cout << mx << endl;
	return 0;
}
