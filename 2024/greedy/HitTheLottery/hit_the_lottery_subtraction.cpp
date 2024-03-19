#include <bits/stdc++.h>
 
using namespace std;
int main() {
	// the bills are sorted from biggest to smallest 
	// in order to greedly take as many as possible from the biggest bill first then move on to the rest.
	int bills[] = {100, 20, 10, 5, 1}; 
	const int m = 5;
 
	int n; cin>>n;
 
	int count = 0;
	
	for(int j = 0; j < m; j++){
		int bill = bills[j]; // current bill that we'll use.
 
		while(n>=bill){ // keep subtracting until we can't take anymore.
			n -= bill;
			count++;
		} // after this while, we won't get back to using the bill again, meaning we used as many as possible from bills[i].	
	}
 
	cout<<count<<endl;
	
 
	return 0;
}
