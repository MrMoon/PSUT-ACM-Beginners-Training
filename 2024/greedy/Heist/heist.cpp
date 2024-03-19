#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n, x, mn = 1e9 + 1, mx = 0;
    cin >> n;
    for (int i = 0 ; i < n ; ++i) { 
        cin >> x;
        mn = min(mn, x); // finding the min number helps us figuring out the start of the range.
        mx = max(mx, x); // finding the max number help us figuring out the end of the range.
    }
    // range of the numbers is from [min, max].
    // the number of numbers missing in the sequence is equal to the length of the range (max - min + 1) - n.
    // the +1 is to include the min in the range of the numbers.
    // the - n is to figure out how many numbers are missing from the sequence (how many keyboards are stolen).
    int ans = mx - mn + 1 - n; 
    cout << ans << endl;
}
