// There are n children who want to go to a Ferris wheel, and your task is to find a gondola for each child.
// Each gondola may have one or two children in it, and in addition, the total weight in a gondola may not exceed x. You know the weight of every child.
// What is the minimum number of gondolas needed for the children?
// Input
// The first input line contains two integers n and x: the number of children and the maximum allowed weight.
// The next line contains n integers p_1,p_2,\ldots,p_n: the weight of each child.
// Output
// Print one integer: the minimum number of gondolas.
// Constraints

// 1 \le n \le 2 \cdot 10^5
// 1 \le x \le 10^9
// 1 \le p_i \le x

// Example
// Input:
// 4 10
// 7 2 3 9

// Output:
// 3

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n; cin >> n;
    ll x; cin >> x;
    vector<ll> p(n);
    for(int i = 0; i < n; i++)
        cin >> p[i];

    sort(p.begin(), p.end()); // sorting the weight vector

    ll start = 0, end = n-1; // 2 pointers at start and end respectively
    int count = 0; // count for pair and indivisual elements
    
    while(start <= end){
        if(p[start] + p[end] <= x){
            count++; // a pair is formed and counted
            start++;
            end--;
        }else{
            count++;
            end--; // one element is considered and counted
        }
    }

    cout << count << endl;

    return 0;
}