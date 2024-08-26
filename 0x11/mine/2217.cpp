#include <bits/stdc++.h>
using namespace std;

int arr[100005];
int N,cnt,mx=INT32_MIN;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i = 0; i < N; i++) cin >> arr[i];
    sort(arr,arr+N);
    for (int i = N-1; i >= 0; i--) {
        cnt++;
        mx = max(mx,arr[i]*cnt);
    }
    cout << mx;
}