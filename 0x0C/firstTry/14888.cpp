#include <bits/stdc++.h>
using namespace std;

int n;
int arr[105];
int op[4]; // +,-,*,/
int oparr[100];
int mn = INT32_MAX, mx = INT32_MIN;

void func(int k, int val){
    if(k == n){
        mn = min(val,mn);
        mx = max(val,mx);
        return;
    }
    for(int i = 0; i < 4; i++){
        if(op[i] > 0){
            op[i]--;
            if(i == 0){
                func(k+1,val + arr[k]);
            }else if(i == 1){
                func(k+1,val - arr[k]);
            }else if(i == 2){
                func(k+1,val * arr[k]);
            }else{
                func(k+1,val / arr[k]);
            }
            op[i]++;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < 4; i++) cin >> op[i];
    func(1,arr[0]);
    cout << mx << '\n' << mn;
}