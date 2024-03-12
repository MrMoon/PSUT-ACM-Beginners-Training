#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	// Read the string.
	string s;
	cin>>s;
	// save how long the string is.
	int n = s.length();
	int counter = 0; // counting how many pairs are different in the array
	
	/*
	** ababb
	** ^...^
	** here the pair is s[0] and s[4], changing s[4] will make the string palindrome.
	*/

	// Checking each pair in the string to see how many different pairs there is 
	for (int i = 0 ; i < (n >> 1) ; ++i) { // n >> 1 = n/2, we just need to reach the middle of the string to verify each pair, otherwise we'll check each pair twice which won't make the count correct.
		// s[i] is the ith character in the string from the beginning.
		// s[n - i - 1] is the ith character from the end of the string.
		// a pair is the ith character in the string from the beginning and the ith character from the end.
		// adding the pairs that are different
		counter += (s[i] != s[n - 1 - i]);  // notice that the boolean condition between the parentheses will always result in a false (0) or true (1).
	}
 
 	// if there is only one pair that is different, then changing one character in that pair to be equal to the other character will get the string to a palindrome.
 	// for example, if the pair that is different is s[2] and s[7] then changing s[2] to s[7] (or vice versa will be sufficient).
	if (counter == 1) {
		puts("YES"); // puts("YES") = cout << "YES" << endl;
	} else { // if there are more than one pair that is different or less than one pair, then there is two cases.
		// if the string length is odd and there is no pair that is different, this means that the middle character in an odd length string does not need to change.
		// for example
		/**
		 * abcba
		 * -----
		 * here the string is palindrome and does not have any different pairs, and because of its odd length, we can change the middle of the string to any character and it will work.
		 */
		if (n&1 and !counter) puts("YES");  
		else puts("NO");  // otherwise, there is no way to change *exactly* one character to make the string palindrome.
	}
	return 0;
}
