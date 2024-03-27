/*
    Going back to the essence.

    Just another day on the moon,
    Cheese not included.
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, q, l, r, type;
    scanf("%d", &n);

    // a is the given array.
    vector<int> a(n + 1);
    // b is the sorted array (based on a).
    vector<int> b(n + 1);
    // long long because numbers can reach 1e9, so a summation of 1e9, n times, can become larger than an int.
    vector<long long> prefixA(n + 1, 0), prefixB(n + 1, 0);
    
    for (int i = 1 ; i <= n ; ++i) {
        cin >> a[i];
        b[i] = a[i];
    }

    // equivelent to the above for loop that reads the elements.
    // for (auto& x: a) {
    //     cin >> x;
    // }

    scanf("%d", &q);

    sort(b.begin(), b.end());

    // compute the sum of the prefix arrays for both the sorted array and the unsorted array.
    for (int i = 1 ; i <= n; ++i) {
        prefixA[i] = prefixA[i - 1] + (long long) a[i];
        prefixB[i] = prefixB[i - 1] + (long long) b[i];
    }

    // the sum of a[l] + a[l + 1] + ... + a[r] 
    // = (sum of a[0] + a[1] + ... + a[r]) - (sum of a[0] + a[1] + ... + a[l - 1])
    while (q--) {
        scanf("%d%d%d", &type, &l, &r);
        if (type == 1) {
            printf("%lld\n",prefixA[r] - prefixA[l - 1]);
        } else {
            printf("%lld\n",prefixB[r] - prefixB[l - 1]);
        }
    }

}

int main() {
    // Always chasing after that full moon glow
    // Warning: May cause howling at unusual times.
    #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin), freopen("output.txt","w",stdout);
    #endif
    
    // Speed has never killed anyone
    //ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T = 1;
    //scanf("%d",&T);
    while(T--) solve();

    #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif
    return 0;
}
