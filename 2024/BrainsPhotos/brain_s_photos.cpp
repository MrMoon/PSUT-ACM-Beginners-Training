#include <iostream>
 
using namespace std;
 
int main() {
	char c;
	int n, m;
	cin >> n >> m;
	for (int i = 0 ; i < n ; ++i) {
		for (int j = 0 ; j < m ; ++j) {
			cin >> c; // reading each of the n*m characters.
			if (c == 'C' or c == 'M' or c == 'Y') { // if one character has color then the whole photo has a color.
				cout << "#Color" << endl;
				return 0;
			}
		}
	}
	puts("#Black&White");
	return 0;
}