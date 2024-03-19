#include <bits/stdc++.h>

using namespace std;
int main() {
    int t; 
    scanf("%d",&t);
    while(t--){
    	int n; cin>>n;
    	int boxes[n];
    	int mn = 100000000; // min is a number that is bigger than the biggest number in the range.
    	int ans = 0;
    	
    	for(int i=0; i<n; i++){
    		cin>>boxes[i];
    		mn = min(mn, boxes[i]);
    	}

    	for (int i = 0; i < n ; ++i) {
            ans += (boxes[i] - mn);
        }
    	cout<<ans<<endl;
    }
    // t = -1

	return 0;
}
