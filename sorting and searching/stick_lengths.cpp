// There are n sticks with some lengths. Your task is to modify the sticks so that each stick has the same length.
// You can either lengthen and shorten each stick. Both operations cost x where x is the difference between the new and original length.
// What is the minimum total cost?
// Input
// The first input line contains an integer n: the number of sticks.
// Then there are n integers: p_1,p_2,\ldots,p_n: the lengths of the sticks.
// Output
// Print one integer: the minimum total cost.
// Constraints

// 1 \le n \le 2 \cdot 10^5
// 1 \le p_i \le 10^9

// Example
// Input:
// 5
// 2 3 1 5 2

// Output:
// 5

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;

    multiset<ll> p;
    for (int i = 0; i < n; i++) {
        ll pi;
        cin >> pi;
        p.insert(pi);
    }

    ll cost = 0;

    auto it = p.begin();
    advance(it, n / 2); // Move the iterator to the middle element

    ll median = *it;

    for (auto it = p.begin(); it != p.end(); it++)
        cost += abs(median - (*it));

    cout << cost << endl;
    return 0;
}
