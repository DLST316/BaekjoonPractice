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
    for (int i = 0; i < n; i++) {
        int idx = lower_bound(arr,arr+n,arr[i] + m) - arr;
        if(arr[idx] - arr[i] >= 0 ) mn = min(mn,arr[idx] - arr[i]);
    }
    cout << mn;
        
    
}