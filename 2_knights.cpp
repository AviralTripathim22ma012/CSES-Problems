// Your task is to count for k=1,2,\ldots,n the number of ways two knights can be placed on a k \times k chessboard so that they do not attack each other.
// Input
// The only input line contains an integer n.
// Output
// Print n integers: the results.
// Constraints

// 1 \le n \le 10000

// Example
// Input:
// 8

// Output:
// 0
// 6
// 28
// 96
// 252
// 550
// 1056
// 1848

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n; 
    cin >> n;

    for(ll k = 1; k <= n; k++){
        ll total_positions = k * k; // total positions
        ll ways_to_place_two_knights = total_positions * (total_positions - 1) / 2; // ways to place two knights
        ll attacks = 4 * (k - 1) * (k - 2);
        if(k > 2)
            ways_to_place_two_knights -= attacks;
        cout << ways_to_place_two_knights << endl;
    }
        
    return 0;
}
