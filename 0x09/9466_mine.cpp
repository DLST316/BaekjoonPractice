#include <bits/stdc++.h>
using namespace std;

int arr[100001];
int state[100001];
const int NOT_VISITED = 0;
const int CYCLED = -1;
int t,n,cnt;

void Run(int x){
    int cur = x;
    while(true){
        state[cur] = x;
        cur = arr[cur];
        if(state[cur] == x){
            while(state[cur] != CYCLED){
                state[cur] = CYCLED;
                cur = arr[cur];
            }
            return;
        }else if(state[cur] != 0) return;
    }
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while(t--){
        cnt = 0;
        cin >> n;
        fill(state+1, state+n+1, 0);
        for (int i = 1; i <= n; i++) cin >> arr[i];
        for (int i = 1; i <= n; i++) if(state[i] == NOT_VISITED) Run(i);
        for (int i = 1; i <= n; i++) if(state[i] != CYCLED) cnt++;
        cout << cnt << "\n";
    }
}