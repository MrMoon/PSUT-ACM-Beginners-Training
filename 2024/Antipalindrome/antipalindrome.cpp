#include <bits/stdc++.h>
 
using namespace std;
 
bool isPal(string s) {
	string tmp = s;
	reverse(s.begin(), s.end()); // the reverse function modify the string that is passed to it, that's why we have to put the string in a tmp before doing the reverse, so we can compare it before and after the reverse.
	return s == tmp;
}
 
int main() {
	string s;
	cin>>s;
	// if the string is not palindrome, we just print the length of the string, since the question require us to print the longest substrings length that is not palindrome.
	if (!isPal(s)) {
		printf("%d\n", s.length());
		return 0;
	}
	// otherwise, we just keep looping through the string as long as it palindrome and not empty.
	while (s.length() != 0 and isPal(s)) {
		// if it is still palindrome, we remove the last character
		//the last character is located in s.length() - 1, so to take a substring of a string without the last character,
		// we use the substr function, which takes where to start and how many characters we want.
		// the s.length() - 2 means we take the whole string but without the last character (the one located in s.length() - 1).
		s = s.substr(0, s.length() - 2); 
	}
	// after the loop is done we will have one of the non palindromic substring.
	printf("%d\n",s.length());
	return 0;
}
