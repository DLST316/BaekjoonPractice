#include <bits/stdc++.h>
using namespace std;
int arr[1005],n,ans;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr,arr+n);
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < i+1; j++) ans += arr[j];
        
    cout << ans;
}