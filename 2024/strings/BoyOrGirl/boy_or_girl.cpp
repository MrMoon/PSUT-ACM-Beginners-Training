#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	string s;
	cin >> s;
	int freq[26] = {};
	for (int i = 0 ; i < s.length() ; ++i) ++freq[s[i] - 'a']; // count the freq of each character, notice that we can also use a bool array here, and just put true if the character appears.
	int counter = 0; // count how many unique characters appears in the string.
	for (int i = 0 ; i < 26 ; ++i) counter += (freq[i] >= 1);
	if (counter&1) puts("IGNORE HIM!"); // counter&1 = counter%2, the last bit is one if and only if the number is odd.
	else puts("CHAT WITH HER!");
	return 0;
}