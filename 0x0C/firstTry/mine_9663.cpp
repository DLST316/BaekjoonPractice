#include<bits/stdc++.h>
using namespace std;
int n,cnt;
bool isused1[15];
bool isused2[28];
bool isused3[28];

void func(int cur){
    if (cur == n + 1){
        cnt++;
        return;
    }
    for (int y = 0; y < n; y++) {
        if(!isused1[y] && !isused2[cur + y] && !isused3[cur - y + n -1]){
            isused1[y] = true;
            isused2[cur + y] = true;
            isused3[cur - y + n -1] = true;
            func(cur+1);
            isused1[y] = false;
            isused2[cur + y] = false;
            isused3[cur - y + n - 1] = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    func(1);
    cout << cnt;
}