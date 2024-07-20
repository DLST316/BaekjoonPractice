#include <bits/stdc++.h>
using namespace std;

int board[3100][3100 * 2];
void fill_star(int x,int y){
    board[x][y] = '*';
    board[x + 1][y - 1] = '*', board[x + 1][y + 1] = '*';

    for (int i = y - 2; i <= y + 2; ++i) {
        board[x + 2][i] = '*';
    }
}
void recur(int x, int y, int n){
    if(n == 3){
        fill_star(x,y);
        return;
    }
    n /= 2;
    recur(x,y,n);
    recur(x + n, y - n, n);
    recur(x + n, y + n, n);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    recur(0,n - 1,n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n * 2 - 1; j++) {
            if(board[i][j] == '*') cout << '*';
            else cout << ' ';
        }
        cout << '\n';
    }
}