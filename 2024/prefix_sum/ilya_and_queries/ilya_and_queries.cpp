#include <bits/stdc++.h>

using namespace std;


int main() {
    string s;
    cin >> s;
    int n = s.length();

    int m;
    scanf("%d", &m);
    
    int prefix[n + 1] = { };
    int sum = 0; // this holds the sum until the ith element.
    
    for (int i = 1 ; i <= n ; ++i) {
        sum += (s[i] == s[i - 1])
        prefix[i + 1] = sum;
    }

    int l, r;
    while (m--) {
        scanf("%d%d", &l, &r);
        printf("%d\n",prefix[r] - prefix[l]); // checking l and r inclusive.
    }
    // m = -1
    return 0;
}
