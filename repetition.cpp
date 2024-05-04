// You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
// Input
// The only input line contains a string of n characters.
// Output
// Print one integer: the length of the longest repetition.
// Constraints

// 1 \le n \le 10^6

// Example
// Input:
// ATTCGGGA

// Output:
// 3

#include <bits/stdc++.h>
using namespace std;
// #define ll long long;
int main() {
    string s;
    cin >> s;
    
    long long ans = 0, count = 0;
    char ch = s[0];
    
    for(char c : s){
        if(c == ch){
            count++; 
            ans = max(ans, count); 
        }
        else{
            ch = c;
            count = 1; 
        }
    }
    
    // ans = max(ans, count);
    cout << ans << endl; 
    return 0;
}