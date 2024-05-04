// A Gray code is a list of all 2^n bit strings of length n, where any two successive strings differ in exactly one bit (i.e., their Hamming distance is one).
// Your task is to create a Gray code for a given length n.
// Input
// The only input line has an integer n.
// Output
// Print 2^n lines that describe the Gray code. You can print any valid solution.
// Constraints

// 1 \le n \le 16

// Example
// Input:
// 2

// Output:
// 00
// 01
// 11
// 10

#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> decimalToBinary(int number, int len){
    vector<int> binaryNumber(len);
    for (int i = 0; i < len; ++i) {
        binaryNumber[i] = number & (1 << i);
    }
    return binaryNumber;
}

vector<int> greyCode(vector<int> v){
    vector<int> grey_code;

    grey_code.push_back(v[0]);

    for(int i = 0; i < v.size(); i++){
        grey_code.push_back(v[i]^v[i+1]);
    }
    return grey_code;
}

int main(){
    int n; cin >> n;
    vector<int> binary_number;
    vector<int> grey;

    for(int i = 0; i < pow(2, n); i++){
        binay_number = decimalToBinary(i, n);
        grey = greyCode(binary_number);

        for(int i = 0; i < grey.size(); i++)
            cout << grey[i];
        cout << endl;

        binary_number.clear();
        grey.clear();
    }
    return 0;
}