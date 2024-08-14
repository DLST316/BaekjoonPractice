#include <bits/stdc++.h>
using namespace std;

long long arr[100010];
int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
    sort(arr,arr + n);
    int cur = arr[0];
    long long ans = arr[0];
    int cnt = 1;
    int max_cnt = 1;

    for (int i = 1; i < n; i++) {
        if(arr[i] == cur){
            cnt++;
        }else{
            cnt = 1;
            cur = arr[i];
        }
        if(max_cnt<cnt){
            max_cnt = cnt;
            ans = arr[i];
        } 
    }
    
    cout << ans;
}