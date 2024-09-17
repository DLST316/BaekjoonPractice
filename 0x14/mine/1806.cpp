#include <bits/stdc++.h>
using namespace std;

int arr[100005];
int n,s,mn = INT32_MAX;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> s;
    for (int i = 0; i < n; i++) cin >> arr[i];
        
    int en = 0;
    int tmps = arr[0];
    for (int st = 0; st < n; st++) {
        while (en < n && tmps < s){
            en++;
            if(en != n)tmps += arr[en];
        }
        if(en == n) break;
        mn = min(mn,en-st+1);
        tmps-=arr[st];
    }
    if(mn == INT32_MAX) mn = 0;
    cout << mn;
}