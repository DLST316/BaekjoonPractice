#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
pair<pair<int,int>,pair<int,int>> arr[100005];
int N,ans;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    int stM,stD,endM,endD;
    for (int i = 0; i < N; i++) {
        cin >> stM >> stD >> endM >> endD;
        arr[i] = {{stM,stD},{endM,endD}};
    }
    
    pair<int,int> t = {3,1};
    while (t < make_pair(12, 1)) {
        pair<int,int> nxt_t = t; 
        for(int i = 0; i < N; i++){
            if(arr[i].X <= t && arr[i].Y > nxt_t)
                nxt_t = arr[i].Y;
        }
        if(nxt_t == t){ 
            cout << 0;
            return 0;
        }
        ans++;
        t = nxt_t;
    }
    cout << ans;
}

