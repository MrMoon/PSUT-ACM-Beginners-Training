#include <bits/stdc++.h>
 
using namespace std;
 
bool isCapital(char c){ // checking if a character is a capital letter or not.
  if(c >= 'A' && c <= 'Z'){
    return true;
  }
  return false;
}
 
// returns true if c exists in s
bool find(string s, char c){
  int n = s.length();
  for(int i=0; i<n; i++){
    if(isCapital(s[i])){
      // make capital letter small letter
      s[i] = s[i] - 'A' + 'a';
    }
    if(s[i] == c){ // c is found in s;
      return true;
    }
  }
  return false;
}
 
int main(){
  int n; 
  cin>>n;
  string s;
  cin>>s;
  bool ans = true;
  for(int i=0; i<26; i++){ // trying to find all 26 letters in the string.
    char curr = 'a' + i;
    if(find(s, curr) == false){
      ans = false;
      break;
    }
  }
  if(ans){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
}