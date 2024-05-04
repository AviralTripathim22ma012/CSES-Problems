// Given an array of n integers, your task is to find the maximum sum of values in a contiguous, nonempty subarray.
// Input
// The first input line has an integer n: the size of the array.
// The second line has n integers x_1,x_2,\dots,x_n: the array values.
// Output
// Print one integer: the maximum subarray sum.
// Constraints

// 1 \le n \le 2 \cdot 10^5
// -10^9 \le x_i \le 10^9

// Example
// Input:
// 8
// -1 3 -2 5 3 -5 2 2

// Output:
// 9

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int n; cin >> n;
    vector<ll> x(n);

    for(int i = 0; i < n; i++){
        cin >> x[i];
    }

    ll currSum = x[0]; // Initialize currSum with the first element
    ll maxSum = x[0]; // Initialize maxSum with the first element

    for(int i = 1; i < n; i++){
        // Choose between the current element and the current sum plus the element
        currSum = max(x[i], currSum + x[i]);

        // Update maxSum if currSum becomes greater
        maxSum = max(currSum, maxSum);
    }

    cout << maxSum << endl;

    return 0;
}
