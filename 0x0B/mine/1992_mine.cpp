#include  <bits/stdc++.h>
using namespace std;

int video[70][70];

bool check(int x, int y, int n){
    for (int i = x; i < x + n; i++) 
        for (int j = y; j < y + n; j++)
            if (video[x][y] != video[i][j]) return false;
    return true;
}

void recur(int x, int y, int n) {
    if (check(x, y, n)) {
        cout << video[x][y];
        return;
    }
    cout << "(";
    int m = n / 2;
    recur(x, y, m);         
    recur(x, y + m, m);     
    recur(x + m, y, m);     
    recur(x + m, y + m, m); 
    cout << ")";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

   int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < n; j++) {
            video[i][j] = line[j] - '0'; // 각 문자를 숫자로 변환하여 배열에 저장
        }
    }


    recur(0,0,n);
        
    
}