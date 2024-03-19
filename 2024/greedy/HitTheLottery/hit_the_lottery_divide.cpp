#include <bits/stdc++.h>
 
using namespace std;
int main() {
	int n, ans = 0;
    int a[] = {100, 20, 10, 5, 1};
    cin >> n;
    for (int i = 0 ; i < 5 ; ++i) {
    	ans += n/a[i]; // this gives us how many times we can use the current bill.
    	n = n%a[i]; // this gives us the remaining after dividing the coin by the bill (divison reminder).
    }
    printf("%d\n",ans);
	return 0;
}

