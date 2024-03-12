#include <bits/stdc++.h>
 
using namespace std;
 
bool isPalindrome(string s){
  string reversed = s;
  reverse(reversed.begin(), reversed.end());
  return (s.length() > 0 && reversed == s);
}
 
int main(){
  string s;
  cin>>s;
  int n = s.length();
 
  string tmp;
  bool found = false;
  
  for(int i=0; i<n; i++){
    tmp = s;
 
    for(int j=0; j<26; j++){ // we are trying to just characher j in s[i]
      char toPut = 'a' + j;
    
      if(s[i] == toPut) // if the character is already in place we don't need to try it.
        continue;
      tmp[i] = toPut; // otherwise we try to change the string and check if it is palindrome.
    
      if(isPalindrome(tmp)){
        found = true;
        break;
      }
 
    }
 
    if(found) break;
  }
  if(found) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
 
}