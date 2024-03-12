#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	string username;
    cin >> username;
    int n = username.size();
    sort(username.begin(), username.end()); // complexity: nlogn
    int cnt = 0;
    for(int i=1; i<n; i++){ // after sorting equal characters will be next to each other, so we count how many characters are unique.
    	if(username[i] != username[i-1]) cnt++;
    }
    
    if(cnt % 2 == 0){
    	cout<<"IGNORE HIM!\n";
    }else{
    	cout<<"CHAT WITH HER!\n";
    }
    return 0;

}