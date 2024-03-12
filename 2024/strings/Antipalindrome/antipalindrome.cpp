#include <bits/stdc++.h>
 
using namespace std;
 
bool isPal(string s) {
	string tmp = s;
	reverse(s.begin(), s.end()); // the reverse function modify the string that is passed to it, that's why we have to put the string in a tmp before doing the reverse, so we can compare it before and after the reverse.
	return s == tmp;
}

// returns substring s[l]...s[r]
// string substring (string s, int l, int r){
//   string ret;
//   for(int i = l; i<=r; i++){
//     ret += s[i];
//   }
//   return ret;
// }
 
int main() {
	#ifndef MRMOON
        freopen("input.txt", "r", stdin) , freopen("output.txt", "w", stdout);
    #endif
    
	string s;
	cin>>s;
	// if the string is not palindrome, we just print the length of the string, since the question require us to print the longest substrings length that is not palindrome.
	if (!isPal(s)) {
		printf("%d\n", (int) s.length());
		return 0;
	}
	// otherwise, we just keep looping through the string as long as it palindrome and not empty.
	while (s.length() != 0 and isPal(s)) {
		// if it is still palindrome, we remove the last character
		//the last character is located in s.length() - 1, so to take a substring of a string without the last character,
		// we use the substr function, which takes where to start and how many characters we want.
		// the s.length() - 1 means we take the whole string but without the last character (the one located in s.length() - 1).
		// the substr isn't inclusive, meaning it will take from [0, s.length()) not [0, s.length()], so to not include the last character we just take from [0, s.length() - 1) meaning s.length() - 1 is not included.
		s = s.substr(0, s.length() - 1); 
	}
	// after the loop is done we will have one of the non palindromic substring.
	printf("%d\n", (int) s.length());
	return 0;
}
