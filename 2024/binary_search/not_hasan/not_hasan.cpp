#include <bits/stdc++.h>

using namespace std;

bool isValid(int n, int x, int y, int mid) {
    return mid/x + mid/y >= n
}

int main() {
    long long n, x, y;
    scanf("%lld%lld%lld", &n, &x, &y);

    // here we're trying to find the minimum of a, b for,
    // ax + by = n.
    // binary searching the answer.
    // the range starts from 0 or 1 to 1e18, since the possible values for the equation ax + by = n can be until 1e18.
    long long left = 0, right = 1e18, mid, ans;
    
    while (left <= right) {
        mid = (right + left)/2;

        if (isValid(mid)) { // if the answer works, that means any value of mid that is bigger than the current mid also works, hence we need to cut the right half.
            ans = mid; // the mid here will always hold the minimum that works since we are search for the first value that works. 
            right = mid - 1;
        } else { // if it does not work, that means any value less than the current value of mid also does not work, hence we need to cut the left part of the range and search in the other half.
            left = mid + 1;
        }
    }

    printf("%lld\n", ans);
    return 0;
}