// Given a string, your task is to reorder its letters in such a way that it becomes a palindrome (i.e., it reads the same forwards and backwards).
// Input
// The only input line has a string of length n consisting of characters A–Z.
// Output
// Print a palindrome consisting of the characters of the original string. You may print any valid solution. If there are no solutions, print "NO SOLUTION".
// Constraints

// 1 \le n \le 10^6

// Example
// Input:
// AAAACACBA

// Output:
// AACABACAA

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    string s;
    cin >> s;
    ll n = s.length();
    unordered_map<char, int> mp;
    vector<char> result1; // even freq vector
    vector<char> result2; // odd freq vector
    int odd_count = 0;

    for (char c : s) {
        mp[c]++;
    }

    for (auto it : mp) {
        if (it.second % 2 != 0)
            odd_count++;
    }

    if (odd_count > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    for (auto it : mp) {
        if (it.second % 2 == 0) {
            for (int j = 1; j <= it.second / 2; j++)
                result1.push_back(it.first);
        } else {
            for (int j = 1; j <= it.second; j++)
                result2.push_back(it.first);
        }
    }

    for (char c : result1)
        cout << c;

    for (char c : result2)
        cout << c;

    reverse(result1.begin(), result1.end());

    for (char c : result1)
        cout << c;

    return 0;
}
