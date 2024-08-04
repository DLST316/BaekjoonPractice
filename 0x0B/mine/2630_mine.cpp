#include <bits/stdc++.h>
using namespace std;

int board[129][129];
int cnt[2];//white 0, blue 1

bool check(int x,int y, int n){
    for (int i = x; i < x + n; i++) 
        for (int j = y; j < y + n; j++) if(board[i][j] != board[x][y]) return false;
    return true;
}

void solve(int x, int y, int n){
    if(check(x,y,n)){
        cnt[board[x][y]] += 1;
        return;
    }
    int m = n / 2;
    for (int i = 0; i < 2; i++) 
        for (int j = 0; j < 2; j++) solve(x + i * m,y + j * m ,m);

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) cin >> board[i][j];
    solve(0,0,n);
    for (int i = 0; i < 2; i++) cout << cnt[i] << '\n';
    
}