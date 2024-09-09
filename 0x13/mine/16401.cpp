#include <bits/stdc++.h>
using namespace std;
int n,m,arr[1000005];

bool solve(int x){
    int64_t cur = 0;
    for (int i = 0; i < n; i++) cur += arr[i]/x;
    return cur >= m;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> m >> n;
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
    int st = 0;
    int en = 1000000000;
    while(st < en){
        int mid = (st+en+1)/2;
        if(solve(mid)) st = mid;
        else en = mid-1;
    }
    cout << st;
}