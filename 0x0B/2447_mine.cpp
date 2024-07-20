#include <bits/stdc++.h>
using namespace std;

char board[2200][2200];

void solve(int x, int y, int n){
    if (n == 1){
        board[x][y] = '*';
        return;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if(i == 1 && j == 1) continue;
            solve(x + n / 3 * i, y + n / 3 * j , n / 3);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)  fill(board[i], board[i]+n, ' ');
    solve(0,0,n);
    for(int i = 0; i < n; i++)  cout << board[i] << '\n';
}