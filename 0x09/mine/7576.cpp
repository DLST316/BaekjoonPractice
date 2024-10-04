#include <bits/stdc++.h>
using namespace std;

int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int board[1001][1001];
int dist[1001][1001];
int n,m;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) cin >> board[i][j];
    
}