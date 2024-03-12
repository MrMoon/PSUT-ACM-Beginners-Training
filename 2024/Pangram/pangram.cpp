#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	int n;
	cin >> n;
	char c;
	int freq[26] = {};
	for (int i = 0 ; i < n ; ++i) {
		cin >> c;
		c = tolower(c); // changing each case to a lower case so we can handle the string as all lower case, since the case does not affect the answer here.
		++freq[c - 'a']; // counting how many times a character appears in the string.
	}
	for (int i = 0 ; i < 26 ; ++i) {
		if (freq[i] == 0) { // if a character does not appear in the string then the answer is NO.
			puts("NO");
			return 0;
		}
	}
	puts("YES");
	return 0;
}