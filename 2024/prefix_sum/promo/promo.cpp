#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, q, x, y;
    scanf("%d%d", &n, &q);

    vector<int> a(n);
    vector<long long> prefix(n + 1, 0);

    for (int i = 0 ; i < n ; ++i) {
        cin >> a[i];
    }

    // we sort because we want to greedily buy the most expensive elements so that we can take the cheapest y of them for free.
    sort(a.begin(), a.end());

    // we compute the sum of the items that we can buy, normal prefix sum.
    for (int i = 0 ; i < n ; ++i) {
        prefix[i + 1] = (long long) a[i] + prefix[i];
    }

    // we buy the most expensive x items from all of the items which costs prefix[n - x + y].
    // then we know that we will take y items for free, so we subtract the cost of the items we can buy prefix[n - x].
    while(q--) {
        cin >> x >> y;
        printf("%lld\n", prefix[n - x + y] - prefix[n - x]);
    }
    return 0;
}