// You are given all numbers between 1,2,\ldots,n except one. Your task is to find the missing number.
// Input
// The first input line contains an integer n.
// The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).
// Output
// Print the missing number.
// Constraints

// 2 \le n \le 2 \cdot 10^5

// Example
// Input:
// 5
// 2 3 1 5

// Output:
// 4

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n, s = 0;
    cin >> n;

    for(int i = 1; i < n; i++){
        int a; cin >> a;
        s += a;
    }
    cout << n*(n+1)/2 - s << endl;
}