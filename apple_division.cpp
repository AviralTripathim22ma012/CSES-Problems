// There are n apples with known weights. Your task is to divide the apples into two groups so that the difference between the weights of the groups is minimal.
// Input
// The first input line has an integer n: the number of apples.
// The next line has n integers p_1,p_2,\dots,p_n: the weight of each apple.
// Output
// Print one integer: the minimum difference between the weights of the groups.
// Constraints

// 1 \le n \le 20
// 1 \le p_i \le 10^9

// Example
// Input:
// 5
// 3 2 7 4 1

// Output:
// 1

// Explanation: Group 1 has weights 2, 3 and 4 (total weight 9), and group 2 has weights 1 and 7 (total weight 8).

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;
    vector<ll> v(n);
    ll total_wt = 0;

    // Read elements into the vector
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        total_wt += v[i];
    }

    ll ans = LLONG_MAX; // Initialize ans with a large value

    for (int i = 0; i < (1 << n); i++) {
        ll curr_sum = 0;
        for (int j = 0; j < n; j++) {
            if (1 << j & i)
                curr_sum += v[j];
        }

        // Check if the current subset's sum is closest to total_wt / 2
        ans = min(ans, abs((total_wt - curr_sum) - curr_sum));
    }

    cout << ans << endl;
    return 0;
}
