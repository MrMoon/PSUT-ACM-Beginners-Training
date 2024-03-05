#include <iostream>
 
using namespace std;
 
int main() {
	int t, a, b, c, d, counter;
	cin >> t;
	for (int i = 0 ; i < t ; i = i + 1) {
		counter = 0;
		cin >> a >> b >> c >> d;
		if (a < b) {
			counter++;
		}
		if (a < c){
			counter++;
		}
		if (a < d){
			counter++;
		}
		cout << counter << endl;
	}
	return 0;
}
