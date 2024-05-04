// You have n coins with positive integer values. What is the smallest sum you cannot create using a subset of the coins?
// Input
// The first input line has an integer n: the number of coins.
// The second line has n integers x_1,x_2,\dots,x_n: the value of each coin.
// Output
// Print one integer: the smallest coin sum.
// Constraints

// 1 \le n \le 2 \cdot 10^5
// 1 \le x_i \le 10^9

// Example
// Input:
// 5
// 2 9 1 2 7

// Output:
// 6

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;
    vector<ll> coins(n);

    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    sort(coins.begin(), coins.end());

    ll smallestSum = 1; // Initialize smallest sum to 1

    for (int i = 0; i < n && coins[i] <= smallestSum; i++) {
        smallestSum += coins[i]; // Include the current coin in the subset
    }

    cout << smallestSum << endl;

    return 0;
}
