#include <iostream>
 
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
 
 	// Find the number that is most repeated
	int mx = 1; // max starts from a value that gets updated easily, usually we start the max from the minimum number in the range (the range of values for the coins is from 1 to 100), or from a minimum value that is outside of the bound like -10 or something.
	for (int i = 0 ; i < n ; i = i + 1) {
		int counter = 1; // start the counter from 1 since we are taking the current element.
		for (int j = i + 1 ; j < n ; j = j + 1) { // traves through the rest of the array to count how many time a[i] has been repeated.
			if (a[i] == a[j]) { // repeated number, increase counter. 
				counter = counter + 1;
			}
		}
		// is the new counter (the number of time a[i] is repeated) bigger than the max.
		if (counter > mx) {
			mx = counter;
		}
	}
	cout << mx << endl;
	return 0;
}
