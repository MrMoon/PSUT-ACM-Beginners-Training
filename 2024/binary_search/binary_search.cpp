#include <bits/stdc++.h>

using namespace std;

// Find the number k in a sorted array of length n in O(log(n)) complexity
int main() {
    int n, k; // n is the size of the array, and k is the number we're looking for.
    cin >> n >> k;

    vector<int> v(n); 
    for (auto& x: v) cin >> x; // similar to for (int i = 0 ; i < n ; ++i) cin >> v[i];

    // sort(v.begin(), v.end()); // sort the array to do binary search if it was not sorted.

    // left = start of the searching range, right = end of the searching range.
    int left = 0, right = n - 1, mid;

    while (left <= right) { // O(log(n))
        // middle element, this is similar to (left + right)/2, however the left + right can cause an overflow in many cases,
        // so what we do is, making the mid move from the left + the distance between the right and the left.
        // notice the bitwise operation of >> 1 is equivalent to dividing by 2^1.
        mid = left + ((right - left) >> 1);
        if (v[mid] == k) { // k is found
            cout << "k is in " << mid << endl;
            return;
        } else if (v[mid] < k) { // all the element that are left of the mid is smaller than k, so we now start the search from mid + 1 until right.
            left = mid + 1;
        } else { // all the elements that are to the right of the mid is larger than k, so we now start the search from left until mid - 1.
            right = mid - 1;
        }
    }

    cout << "Not found" << endl;
    return 0;
}
