// You are given an array that contains each number between 1 \dots n exactly once. Your task is to collect the numbers from 1 to n in increasing order.
// On each round, you go through the array from left to right and collect as many numbers as possible. What will be the total number of rounds?
// Input
// The first line has an integer n: the array size.
// The next line has n integers x_1,x_2,\dots,x_n: the numbers in the array.
// Output
// Print one integer: the number of rounds.
// Constraints

// 1 \le n \le 2 \cdot 10^5

// Example
// Input:
// 5
// 4 2 1 5 3

// Output:
// 3

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;

    unordered_map<int, ll> p;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        p[x] = i;  // Fix: Use the input value as the key, and the index as the value.
    }

    int rounds = 1;
    ll x = 1;

    while (x <= n) {
        auto it1 = p.find(x);
        auto it2 = p.find(x + 1);

        if (it1 != p.end() && (it2 == p.end() || (*it1).second < (*it2).second)) {
            // Fix: Check if it2 is at the end before dereferencing it.
            p.erase(x);
            x++;
        } else {
            x++;
            rounds++;
        }
    }

    cout << rounds << endl;

    return 0;
}
