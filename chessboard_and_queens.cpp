// Your task is to place eight queens on a chessboard so that no two queens are attacking each other. As an additional challenge, each square is either free or reserved, and you can only place queens on the free squares. However, the reserved squares do not prevent queens from attacking each other.

// How many possible ways are there to place the queens?

// Input
// The input has eight lines, and each of them has eight characters. Each square is either free (.) or reserved (*).

// Output
// Print one integer: the number of ways you can place the queens.

// Example
// Input:

// ........
// ........
// ..*.....
// ........
// ........
// .....**.
// ...*....
// ........
// Output:

// 65

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n = 8;
    vector<string> board(n);
    for(int i = 0; i < n; i++){
        cin >> board[i];
    }
    vector<bool> column(n, false);
    vector<bool> main_diag(n-1, false);
    vector<bool> off_diag(n-1, false);
    int n_queens = 8;

    for(int i = 0; i < n; i++){
        column[j] = true; // queen is place in jth column
        j++
        if(!column[j]){
            if(!main_diag[i - j + n - 1]){
                if(!off_diag[i + j]){
                    column[j] = true;
                    main_diag[i - j + n - 1] = true;
                    off_diag[i + j] = true;
                    n_queens--;
                }
            }
        }else{
            // back tracking
            n_queen++; // queen is kept back
            column[j] = false;
            j++;
            column[j] = true;
        }
        if(n_queens == 0)
            break;
    }
    
    return 0;
}