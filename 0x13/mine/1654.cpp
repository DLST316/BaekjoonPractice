#include <bits/stdc++.h>
using namespace std;

int k,n;
int arr[100005];

bool solve(int64_t x){
    int64_t cur = 0;
    for (int i = 0; i < k; i++) cur += arr[i] / x;
    return cur >= n;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> k >> n;
    for (int i = 0; i < k; i++) cin >> arr[i];
    int64_t st = 1;
    int64_t en = INT32_MAX;
    while(st < en){
        int64_t mid = (st+en+1)/2;
        if(solve(mid)) st = mid;
        else en = mid - 1;
    }
        
    cout << st;
}
