#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n, counter = 0;
    cin >> n;
    // a represent the home kit, so a[i] is the ith team home kit.
    // b represent the away kit, so b[i] is the ith team away kit.
    int a[n], b[n]; 
    for (int i = 0 ; i < n ; ++i) {
        cin >> a[i];
        cin >> b[i];
    }
    // we want to try to simulate the game and play every possible game.
    // i represent the home team.
    // j represent the away team.
    for (int i = 0 ; i < n ; ++i) {
        for (int j = 0 ; j < n ; ++j) {
            if (i == j) continue;  // we don't want to compare the team with itself
            counter += (a[i] == b[j]);
        }
    }
    printf("%d\n",counter);
    return 0;
}