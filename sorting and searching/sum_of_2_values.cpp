// You are given an array of n integers, and your task is to find two values (at distinct positions) whose sum is x.
// Input
// The first input line has two integers n and x: the array size and the target sum.
// The second line has n integers a_1,a_2,\dots,a_n: the array values.
// Output
// Print two integers: the positions of the values. If there are several solutions, you may print any of them. If there are no solutions, print IMPOSSIBLE.
// Constraints

// 1 \le n \le 2 \cdot 10^5
// 1 \le x,a_i \le 10^9

// Example
// Input:
// 4 8
// 2 7 5 1

// Output:
// 2 4
    
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n; cin >> n;
    ll x; cin >> x;

    map<ll, ll> indices;  // Map to store the indices of elements

    for (ll i = 0; i < n; i++) {
        ll ai; cin >> ai;

        // Check if the complement (x - ai) exists in the map
        if (indices.find(x - ai) != indices.end()) {
            cout << indices[x - ai] + 1 << " " << i + 1 << endl;
            return 0;
        }

        // Insert the current element along with its index into the map
        indices[ai] = i;
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}
