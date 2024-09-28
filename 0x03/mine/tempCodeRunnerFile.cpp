#include <bits/stdc++.h>
using namespace std;
bool arr[1000005];
int n,t,x;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    while(n--){
        cin >> t;
        arr[t] = true;
    }
    cin >> x;
    int ans = 0;
    for(int i = 1; i <= x/2; i++){
        if((i != x-1) &&(arr[i] && arr[x-i])){
            ans++;
            arr[i] = arr[x-i] = false;
        }
    }
    cout << ans;
}