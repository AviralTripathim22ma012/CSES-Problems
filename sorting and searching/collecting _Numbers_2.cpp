// You are given an array that contains each number between 1 \dots n exactly once. Your task is to collect the numbers from 1 to n in increasing order.
// On each round, you go through the array from left to right and collect as many numbers as possible.
// Given m operations that swap two numbers in the array, your task is to report the number of rounds after each operation.
// Input
// The first line has two integers n and m: the array size and the number of operations.
// The next line has n integers x_1,x_2,\dots,x_n: the numbers in the array.
// Finally, there are m lines that describe the operations. Each line has two integers a and b: the numbers at positions a and b are swapped.
// Output
// Print m integers: the number of rounds after each swap.
// Constraints

// 1 \le n, m \le 2 \cdot 10^5
// 1 \le a,b \le n

// Example
// Input:
// 5 3
// 4 2 1 5 3
// 2 3
// 1 5
// 2 3

// Output:
// 2
// 3
// 4

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> p(n + 1);  // Use a vector to store the positions of numbers.
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        p[x] = i;  // Store the position of each number.
    }

    int rounds = 1;

    set<int> unique_positions;  // Use a set to keep track of unique positions.

    for (int i = 1; i <= n; i++) {
        unique_positions.insert(p[i]);  // Initialize the set.

        if (unique_positions.size() == i) {
            rounds = i;  // Update rounds if the set size matches the current index.
        }

        cout << rounds << endl;
    }

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        // Swap positions of numbers a and b.
        swap(p[a], p[b]);

        unique_positions.clear();  // Clear the set for the next iteration.

        rounds = 1;

        for (int j = 1; j <= n; j++) {
            unique_positions.insert(p[j]);

            if (unique_positions.size() == j) {
                rounds = j;  // Update rounds if the set size matches the current index.
            }

            cout << rounds << endl;
        }
    }

    return 0;
}
