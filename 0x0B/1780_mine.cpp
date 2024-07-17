#include <bits/stdc++.h>
using namespace std;

int paper[2200][2200];
int cnt[3];


bool check(int x, int y, int n){
    for (int i = x; i < x + n; i++) {
        for (int j = y; j < y + n; j++) {
            if(paper[i][j] != paper[x][y]) return false;
        }
    }
    return true;
}

void solve(int x, int y, int z){
    if(check(x,y,z)){
        cnt[paper[x][y]+1] += 1;
        return;
    }
    int n = z / 3;
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) solve(x + i * n, y + j * n, n);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> paper[i][j];
        }
    }
    solve(0,0,n);
    for (int i = 0; i < 3; i++) cout << cnt[i] << '\n';
        
    
}