#include <bits/stdc++.h>

using namespace std;

// Find the number of occurences of the number k in a sorted array of length n in O(log(n)) complexity.
int main() {
    int n, k; // n is the size of the array, and k is the number we're looking for.
    cin >> n >> k;

    vector<int> v(n); 
    for (auto& x: v) cin >> x; // the array can have duplicate numbers, ex: 1,1,1,2,2,3,4,4,4,5

    // sort(v.begin(), v.end()); // sort the array to do binary search if it was not sorted.

    // left = start of the searching range, right = end of the searching range.
    int left = 0, right = n - 1, mid, firstOccurence, lastOccurence;

    // to find the number of occurences of k in the array we can binary search the first occurence of k and the last occurence of k in the array.
    // this can be done using binary search to find the first occurence of k, we can do the following, 
    // unlike the normal binary search, we don't stop when an element is found. 
    // Instead, it continues searching to the left (the first occurence will be near the smaller values part of the array) 
    // of the array to find the first occurence of the element.
    while (left <= right) {
        mid = left + ((right - left) >> 1);
        if (v[mid] == k) { // found k, update the firstOccurence and continue search if there was a k in the first half, from left to mid - 1
            firstOccurence = mid;
            right = mid - 1;
        } else if (a[mid] > k) { // k not found yet, the value of the mid element is bigger, so we have to search from left to mid - 1
            right = mid - 1;
        } else { // k not found yet, the value of the mid element is smaller, so we have to search from mid + 1 to right
            left = mid + 1; 
        }
    }

    // Now to find the last occurence we can do a similar thing, but search the right side of the array (the last occurence will be near the larger values part of the array).
    left = 0, right = n - 1;
    while (left <= right) {
        mid = left + ((right - left) >> 1);
        if (v[mid] == k) { // found k, update the lastOccurence and continue search if there was a k in the last half, from mid + 1 to right
            lastOccurence = mid;
            left = mid + 1;
        } else if (a[mid] > k) { // k not found yet, the value of the mid element is bigger, so we have to search from left to mid - 1
            right = mid - 1;
        } else { // k not found yet, the value of the mid element is smaller, so we have to search from mid + 1 to right
            left = mid + 1;
        }
    }
    

    cout << "Number of Occurences = " << lastOccurence - firstOccurence + 1 << '\n';
    return 0;
}
