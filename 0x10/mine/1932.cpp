#include <bits/stdc++.h>
using namespace std;

int tri[505][505];
int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < i + 1; j++) 
            cin >> tri[i][j];
    
    for(int i = n-2; i >= 0; i--)
        for (int j = 0; j < i + 1; j++)
            tri[i][j] += max(tri[i+1][j],tri[i+1][j+1]);
        
    cout << tri[0][0];
}