#include <bits/stdc++.h>

using namespace std;
int main() {
    int t; scanf("%d",&t);
    while(t--){
    	int n; cin>>n;
    	int boxes[n];
    	int mn = 100000000;
    	int sum = 0;
    	
    	for(int i=0; i<n; i++){
    		cin>>boxes[i];
    		mn = min(mn, boxes[i]);
    		sum += boxes[i];
    	}

        // sum = (boxes[0] - mn) + (boxes[1] - mn) + ... + (boxes[n - 1] - mn)
        // rearranging the terms,
        // sum = (boxes[0] + boxes[1] + ... + boxes[n - 1]) - (mn + mn + ... + mn)
        // sum = (boxes[0] + boxes[1] + ... + boxes[n - 1]) - (mn * n) we are adding the mn n times here.
    	sum -= mn*n; 
    	cout<<sum<<endl;
    }
    // t = -1

	return 0;
}