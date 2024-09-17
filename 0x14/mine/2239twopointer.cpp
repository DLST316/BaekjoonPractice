#include <bits/stdc++.h>
using namespace std;
int arr[100005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr,arr+n);
    int mn = INT32_MAX;

    int en = 0;
    for (int i = 0; i < n; i++) {
        while (en < n && arr[en] - arr[i] < m) en++;
        if(en == n) break;
        mn = min(mn, arr[en] - arr[i]);
        
    }
    cout << mn;
        
    
}