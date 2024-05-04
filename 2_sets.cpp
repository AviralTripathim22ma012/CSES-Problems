// Your task is to divide the numbers 1,2,\ldots,n into two sets of equal sum.
// Input
// The only input line contains an integer n.
// Output
// Print "YES", if the division is possible, and "NO" otherwise.
// After this, if the division is possible, print an example of how to create the sets. First, print the number of elements in the first set followed by the elements themselves in a separate line, and then, print the second set in a similar way.
// Constraints

// 1 \le n \le 10^6

// Example 1
// Input:
// 7

// Output:
// YES
// 4
// 1 2 4 7
// 3
// 3 5 6
// Example 2
// Input:
// 6

// Output:
// NO


    // possible only when total sum = even
    // Algorithm:
    // if(n == 3)
    //      set1 = [1,2]
    //      set2 = [3]
    // if(n%4 == 0)
    //      set1 = [first n/4 nost + last n/4 nos]
    //      set2 = [remaining nos]
    // if(n%4 == 3) 
    //     set1 = [1,2, first n/4 after, last n/4]
    //      set2 = [3, remaining] 

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;

    ll total_sum = n * (n + 1) / 2;

    if (total_sum % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    ll half_sum = total_sum / 2;
    vector<ll> set1, set2;

    for (ll i = n; i > 0; i--) {
        if (half_sum - i >= 0) {
            set1.push_back(i);
            half_sum -= i;
        } else {
            set2.push_back(i);
        }
    }

    cout << set1.size() << endl;
    for (ll i : set1)
        cout << i << " ";

    cout << "\n";

    cout << set2.size() << endl;
    for (ll i : set2)
        cout << i << " ";

    return 0;
}