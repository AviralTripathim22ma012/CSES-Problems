// You are given a playlist of a radio station since its establishment. The playlist has a total of n songs.
// What is the longest sequence of successive songs where each song is unique?
// Input
// The first input line contains an integer n: the number of songs.
// The next line has n integers k_1,k_2,\ldots,k_n: the id number of each song.
// Output
// Print the length of the longest sequence of unique songs.
// Constraints

// 1 \le n \le 2 \cdot 10^5
// 1 \le k_i \le 10^9

// Example
// Input:
// 8
// 1 2 1 3 2 7 4 2

// Output:
// 5

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> k(n);
    for (int i = 0; i < n; i++)
        cin >> k[i];

    unordered_map<int, int> lastIndex;
    int longestSeq = 0;

    for (int i = 0, j = 0; j < n; j++) {
        if (lastIndex.count(k[j]) > 0) {
            i = max(lastIndex[k[j]] + 1, i);
        }

        lastIndex[k[j]] = j;
        longestSeq = max(longestSeq, j - i + 1);
    }

    cout << longestSeq << endl;

    return 0;
}
